#include <vector>
#include <fstream>
#include <opencv2/opencv.hpp>
#include <chrono>

class Label
{
public:
    Label() : m_frame(0), m_type(""), m_bbox(cv::Rect()) {}
    Label(int frame, const std::string &type, const cv::Rect &bbox)
        : m_frame(frame), m_type(type), m_bbox(bbox) {}

    int m_frame;            //Frame number, where the bounding box corresponds to
    std::string m_type;     //Class of the bounding box (e.g. Pedestrian, Car, Cyclist) --> DontCare should be ignored
    cv::Rect m_bbox;
};

std::vector<Label> loadLabelsFromFile(std::string filename)
{
    std::vector<Label> labels;
    std::ifstream file(filename);
    if (!file.is_open())
    {
        std::cerr << "Could not open label file: " << filename << std::endl;
        return labels;
    }

    std::string line;
    while (std::getline(file, line))
    {
        std::istringstream ss(line);
        int frame, track_id, truncated, occluded;
        float alpha, bbox_left, bbox_top, bbox_right, bbox_bottom;
        float height, width, length;
        float loc_x, loc_y, loc_z, rot_y;
        std::string type;

        ss >> frame >> track_id >> type >> truncated >> occluded >> alpha >> bbox_left >> bbox_top >> bbox_right >> bbox_bottom >> height >> width >> length >> loc_x >> loc_y >> loc_z >> rot_y;

        if (!ss.fail())
        {
            cv::Rect bbox(static_cast<int>(bbox_left), static_cast<int>(bbox_top),
                            static_cast<int>(bbox_right - bbox_left), static_cast<int>(bbox_bottom - bbox_top));
            labels.emplace_back(frame, type, bbox);
        }
        else
        {
            std::cerr << "Error reading line: " << line << std::endl;
        }
    }
    return labels;
}



int main()
{
    //reading labels (GT Boxes) from KITTI Dataset
    std::cout << "Error: Could not open or find the image!" << std::endl;
    std::string pathToLabelFile = "/Path/To/Label/File";
    auto allLabelsFromSequence = loadLabelsFromFile(pathToLabelFile);
    std::cout << "numberOfLabels: " << allLabelsFromSequence.size() << std::endl;
    for (const auto& label : allLabelsFromSequence) { //print class of all elements from frame number 5
        if (label.m_frame == 5) {
            std::cout << "Type: " << label.m_type << std::endl;
        }
    }

    //Get current timestamp
    auto now = std::chrono::high_resolution_clock::now();
    std::time_t now_time_t = std::chrono::system_clock::to_time_t(now);
    std::cout << "Current time: " << std::ctime(&now_time_t) << std::endl;


    //Load example image
    cv::Mat image = cv::imread("/Path/To/Image/File");
    if (image.empty()) {
        std::cerr << "Error: Could not open or find the image!" << std::endl;
        return -1;
    }
    cv::imshow("Display Image", image);
    cv::waitKey(0);

}