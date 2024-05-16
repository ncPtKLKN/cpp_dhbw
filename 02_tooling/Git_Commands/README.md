# 1. Git - Client Preprocessing

## Git Version checken

```bash
git --version
```

<br>

## Git installieren

- ### Mit HomeBrew installieren (Mac)

  ```bash
  brew install git
  ```

- ### Mit Git Installer installieren (Mac + Win)
  - #### [Git Download Seite](https://git-scm.com/downloads)

<br>
<br>
<br>

# 2. Git - Credentials von GitHub holen

1. Auf www.github.de einloggen
2. Profile / Settings
3. Developer Settings
4. Personal Access Token
5. Neuen Token erstellen
6. An einem SICHEREN ORT ABSPEICHERN

<br>
<br>
<br>

# 3. Git CLI

| Schritt | <div style="width:130px"> CLI Befehl </div> | Beschreibung                                                                                                                                                                                                                                                                                                            |
| ------- | ------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| 1       | `$ git init`                                | Ein lokaler Ordner wird zu einem Git Repository indem ein verstecktes Verzeichnis .git hinzugefügt wird. Dieser Befehl muss beim Projektstart nur einmal ausgeführt werden und ist solange gültig, solange das .git Verzeichnis besteht."                                                                               |
| 2       | `$ git config`                              | Username und Usermail lokal im Repository hinterlegen <br> `git config --local user.name "John Doe"` <br> `git config --local user.email "john@doe.de"` <br> Username und Usermail global am Git-Client hinterlegen <br> `git config --global user.name "John Doe"` <br> `git config --global user.email "john@doe.de"` |
| 3       | `$ git clone`                               | Erzeugt eine Kopie eines bestehendes Repository von einem remote Server (z.B. GitHub)                                                                                                                                                                                                                                   |
| 4       | `$ git status`                              | Zeigt die Datein an, welche geändert wurden                                                                                                                                                                                                                                                                             |
| 5       | `$ git diff`                                | Zeigt die direkte Änderung in der Datei                                                                                                                                                                                                                                                                                 |
| 6       | `$ git ignore`                              | Git ignoriert Files / Ordner                                                                                                                                                                                                                                                                                            |
| 7       | `$ git add`                                 | Änderungen zum Staging Bereich hinzufügen                                                                                                                                                                                                                                                                               |
| 8       | `$ git restore`                             | Änderungen vom Staging Bereich entfernen                                                                                                                                                                                                                                                                                |
| 9       | `$ git commit`                              | Änderungen in das lokale Repository schieben                                                                                                                                                                                                                                                                            |
| 10      | `$ git log`                                 | Gibt eine Überischt der commits zurück                                                                                                                                                                                                                                                                                  |
| 11      | `$ git branch`                              | Eine Kopie für ein neues Feature erstellen und auf der Kopie weiterarbeiten                                                                                                                                                                                                                                             |
| 12      | `$ git checkout`                            | Zwischen den einzelnen Branches wechseln                                                                                                                                                                                                                                                                                |
| 13      | `$ git show`                                | Commits detailiert anzeigen                                                                                                                                                                                                                                                                                             |
| 14      | `$ git push`                                | Änderungen des lokalen Repositorys zum remote Server pushen                                                                                                                                                                                                                                                             |
| 15      | `$ git fetch`                               | Änderungen des remote Repositorys lokal anzeigen (ohne merge)                                                                                                                                                                                                                                                           |
| 16      | `$ git merge`                               | Änderungen des remote Repositorys zum Code hinzufügen                                                                                                                                                                                                                                                                   |
| 17      | `$ git pull`                                | fetch + merge                                                                                                                                                                                                                                                                                                           |

<br>

---

<br>
<br>

## Erweiterung zu `git init`

<details closed>

##### Startet ein neues Repository in dem Ordner in dem du dich befindest und erstellt ein verstecktes .git Verzeichnis. In diesem Verzeichnis speichert _git_ alle Objekte und Referenzen die als Teil des Projektes erstellt werden.

</details>
<br>

## Erweiterung zu `git config`

<details closed>

##### Bevor du mit der Verwendung eines Git Repositorys beginnst, trage deinen Benutzernamen und deine Benutzermail in der Konfigurationsdatei ein. Dies kann auf zwei unterschiedliche Weisen geschehen:

<br>

##### Wenn keine andere Konfigurationsoption festgelegt wurde, geschehen Schreibvorgänge mit git config standardmäßig auf lokaler Ebene. Die lokale Konfiguration wird auf das Repository angewendet, in dessen Zusammenhang der Befehl git config ausgeführt wird. Die lokalen Konfigurationswerte werden in einer Datei im .git-Verzeichnis des Repositorys gespeichert: .git/config

```bash
git config --local user.name "John Doe"
git config --local user.email "john@doe.de"
```

<br>

##### Da sich ja unser Name nicht ändert und unsere Mail Adresse auch nicht regelmäßig, gibt es eine einfachere Methode. Und zwar

```bash
git config --global user.name "John Doe"
git config --global user.email "john@doe.de"
```

<br>

> ##### Die Konfiguration auf globaler Ebene ist benutzerspezifisch, das heißt, sie wird auf einen Benutzer des Betriebssystems angewendet. Die globalen Konfigurationswerte werden in einer Datei im Hauptverzeichnis des Benutzers gespeichert. ~ /.gitconfig bei Unix-Systemen und C:\\.gitconfig unter Windows

</details>
<br>

## Erweiterung zu `git clone`

<details closed>

##### Git clone wird verwendet, um ein vorhandenes Git-Repository in ein neues lokales Verzeichnis zu kopieren. Die Aktion Git clone erstellt ein neues lokales Verzeichnis für das Repository, kopiert den gesamten Inhalt des angegebenen Repositorys, erstellt die verfolgten Remote-Zweige und checkt einen ersten Zweig lokal aus.

```bash
git clone https://github.com/<dein-github-username>/<repo-name>.git
```

</details>
<br>

## Erweiterung zu `git status`

<details closed>

##### Git-Status zeigt den aktuellen Status deines Git-Arbeitsverzeichnisses und deines Staging-Bereichs an. Im Zweifelsfall solltest du git status ausführen. Das ist immer eine gute Idee. Der Befehl git status gibt nur Informationen aus, er ändert keine Übertragungen oder Änderungen in deinem lokalen Repository.

</details>
<br>

## Erweiterung zu `git diff`

<details closed>

##### Bei einem Vergleich werden zwei Eingabe-Datasets herangezogen und die Unterschiede zwischen ihnen ausgegeben. git diff ist ein vielseitiger Git-Befehl, durch dessen Ausführung ein Vergleich von Git-Datenquellen durchgeführt wird. Diese Datenquellen können Commits, Branches, Dateien und vieles mehr sein. In diesem Dokument werden wir auf typische git diff-Aufrufe und den Vergleich von Workflow-Mustern eingehen. Der git diff-Befehl wird häufig zusammen mit git status und git log verwendet, um den aktuellen Status eines Git-Repositorys zu analysieren.

</details>
<br>

## Erweiterung zu `git ignore`

<details closed>

##### Die Datei .gitignore teilt Git mit, welche Dateien beim Übertragen Ihres Projekts in das GitHub-Repository ignoriert werden sollen. gitignore befindet sich im Stammverzeichnis Ihres Repositorys.

<br>

> ##### _: wird als Platzhalter verwendet _.exe ignoriert jede Datei mit der Erweiterung .exe

> ##### /: ignoriert Verzeichnisse mit diesem Namen. vendor/ ignoriert das Verzeichnis vendor.

> ##### #: kommentiert die Zeile

<br>

##### Eine .gitignore Datei kann wie folgt erstellt werden:

```bash
# Mac
touch .gitignore

# Windows
echo >> .gitignore
```

<br>

##### Nun kann der direkte Pfad der Datei in die .gitignore Datei geschrieben werden, welche ignoriert werden soll:

```bash
# Ignoriert den kompletten Ordner 'private_code' sowie die im Ordner befindlichen Datein
folder1/folder2/private_code/

# Ignoriert alle JPEG Bilder
*.jpg
*.jpeg
```

</details>
<br>

## Erweiterung zu `git add`

<details closed>

##### Mit dem Befehl git add werden neue oder geänderte Dateien in dein Arbeitsverzeichnis dem Git-Speicherbereich hinzugefügt. Git add ist ein wichtiger Befehl - ohne ihn würde kein Git-Commit jemals etwas tun. Manchmal hat git add den Ruf, ein unnötiger Schritt in der Entwicklung zu sein. In Wirklichkeit ist git add jedoch ein wichtiges und leistungsfähiges Werkzeug. git add ermöglicht es dir, die history zu gestalten, ohne deine Arbeitsweise zu verändern.

##### Dabei gibt es verschiedene Wege Files dem Staging Bereich anzufügen:

```bash
# Fügt nur das file hello.html hinzu
git add hello.html

# Fügt alle geänderten Files hinzu
git add .
```

</details>
<br>

## Erweiterung zu `git restore`

<details closed>

##### Ebenso können einzelne oder alle Files vom Staging Bereich wieder entfernt werden:

```bash
# Entfernt lediglich das file main.js
git restore --staged main.js

# Entfernt alle files aus dem staging bereich
git restore --staged .
```

</details>
<br>

## Erweiterung zu `git commit`

<details closed>

##### Eine Möglichkeit, sich Commits vorzustellen, ist, dass sie einen snapshot eines Projekts zu einem bestimmten Zeitpunkt in der Projektgeschichte darstellen. Wenn ein Commit erstellt wird, wird eine Aufzeichnung darüber erstellt, wie alle Dateien und Verzeichnisse in einem Projekt zu dem Zeitpunkt aussahen, als der Commit erstellt wurde.

<br>

##### Dieser Datensatz kann dann in der Zukunft gelesen werden, um zu sehen, wie ein Projekt zu einem bestimmten Zeitpunkt aussah und wer welche Änderungen an welchen Dateien im Projekt vorgenommen hat. Commits sind in der Tat eine wichtige Funktion von Git, da sie es Entwicklern ermöglichen, eine umfassende Aufzeichnung darüber zu führen, wie sich ihr Repository im Laufe der Zeit entwickelt hat.

##### Ein Commit kann wie folgt generiert werden:

```bash
git commit -m "<deine commit nachricht>"
```

</details>
<br>

## Erweiterung zu `git reset`

<details closed>

##### Der letzte Commit kann mittels reset rückgängig gemacht werden

```bash
git reset --soft HEAD^
```

> (HEAD^ geht von HEAD einen Schritt zurück HEAD^^/HEAD~2 geht 2 Committs zurück, …)

</details>
<br>

## Erweiterung zu `git log`

<details closed>

##### Der Befehl git log zeigt eine Liste aller an einem Repository vorgenommenen Übertragungen an. Du kannst den Hash jedes Git-Commits, die mit jedem Commit verbundene Nachricht und weitere Metadaten sehen. Dieser Befehl ist nützlich, um die Historie eines Repositorys anzuzeigen. Während sich der Befehl git status auf das aktuelle Arbeitsverzeichnis konzentriert, kannst du mit git log die Historie deines Repositorys einsehe

```bash
git log
```

</details>
<br>

## Erweiterung zu `git branch`

<details closed>

##### Die Verzweigung in Git ist vergleichbar mit der Verzweigung eines Baumes. Analog dazu sind die Äste eines Baumes mit dem zentralen Teil des Baumes, dem Stamm, verbunden. Während Zweige entstehen und abfallen können, bleibt der Stamm kompakt und ist der einzige Teil, an dem wir erkennen können, dass der Baum lebt und steht. In ähnlicher Weise ist ein Zweig in Git eine Möglichkeit, eine neue Funktion oder eine Änderung an der Software zu entwickeln und zu kodieren, ohne den Hauptteil des Projekts zu beeinträchtigen. Wir können auch sagen, dass Zweige eine weitere Entwicklungslinie im Projekt schaffen. Der primäre oder Standardzweig in Git ist der Master-Zweig (ähnlich wie ein Stamm des Baumes). Sobald das Repository erstellt wird, wird auch der Hauptzweig (oder der Standardzweig) erstellt.

##### Einen neuen Branch kannst du mittels folgendem Befehl erstellen

```bash
git branch <new-feature>
```

<br>

##### Alle Branches im aktuellen Repository kannst du dir wie folgt anzeigen lassen

```bash
git branch
```

<br>

##### Einen branch "soft" löschen

```bash
git branch -d <branch>
```

> Löscht den angegebenen Branch. Das ist insofern ein "sicherer" Vorgang, als dass Git dafür sorgt, dass du keinen Branch löschst, wenn es nicht gemergte Änderungen gibt.

<br>

##### Einen branch "hard" löschen

```bash
git branch -D <branch>
```

> Erzwingt das Löschen des angegebenen Branches, selbst wenn es nicht gemergte Änderungen gibt. So sieht der Befehl aus, mit dem du alle Commits, die mit einem bestimmten Entwicklungszweig in Verbindung stehen, dauerhaft verwerfen kannst.

<br>

##### Einen branch umbenennen (dafür musst du dich in diesem branch befinden)

```bash
git branch -m <new_branch_name>
```

</details>
<br>

## Erweiterung zu `git checkout`

<details closed>

##### Git checkout arbeitet Hand in Hand mit git branch. Mit dem Befehl git branch kann ein neuer Branch erstellt werden. Wenn du ein neues Feature einführen möchtest, erstellst du einen neuen Branch aus dem main mithilfe von git branch new_branch. Sobald die Erstellung abgeschlossen ist, verwendest du git checkout new_branch, um zu diesem Branch zu wechseln. Zusätzlich akzeptiert der Befehl git checkout ein Argument -b, das eine bequeme Möglichkeit darstellt, um den neuen Branch zu erstellen und sofort zu diesem zu wechseln. Du kannst in einem einzelnen Repository an mehreren Features arbeiten, indem du mit git checkout zwischen ihnen wechselst.

##### Neuen Branch mit dem Namen "feature-1" erstellen und direkt dorthin wechseln

```bash
git checkout -b feature-1
```

<br>

##### Checkout zu dem branch "feature-1"

```bash
git checkout feature-1
```

<br>

##### Standardmäßig verwendet git checkout -b den new-branch des aktuellen HEAD als Grundlage. Ein optionaler zusätzlicher Branch-Parameter kann an git checkout angehängt werden. Im Beispiel oben wird ＜ existing-branch ＞ angehängt und dient dann als Grundlage für new-branch von existing-branch anstatt des aktuellen HEAD.

```bash
git checkout -b ＜new-branch＞ ＜existing-branch＞
```

> Erzeugt einen neuen Branch auf Code-Basis eines existierenden Branches und nicht auf basis des Main/Master Branches

</details>
<br>

## Erweiterung zu `git show`

<details closed>

##### git-show ist ein Befehlszeilenprogramm, mit dem erweiterte Details zu Git-Objekten wie Blobs, Bäumen, Tags und Commits angezeigt werden können. git-show verfügt über ein spezifisches Verhalten für jeden Objekttyp.

</details>
<br>

## Erweiterung zu `git push`

<details closed>

##### git push aktualisiert den entfernten Zweig mit lokalen Übertragungen. Es ist einer der vier Befehle in Git, die zur Interaktion mit dem entfernten Repository auffordern. Sie können sich Git Push auch als Aktualisierung oder Veröffentlichung vorstellen.

##### Standardmäßig aktualisiert git push nur den entsprechenden Zweig im entfernten Repository. Wenn Sie also in den Master-Zweig ausgecheckt sind, wenn Sie git push ausführen, wird nur der Master-Zweig aktualisiert. Es ist immer eine gute Idee, git status zu verwenden, um zu sehen, in welchem Zweig Sie sich befinden, bevor Sie den Push-Vorgang auf dem entfernten Rechner durchführen.

##### Nachdem Sie die Änderungen lokal vorgenommen und festgeschrieben haben, können Sie sie mit git push an das entfernte Repository weitergeben. Durch das Übertragen von Änderungen an das entfernte Repository werden Ihre Commits für andere zugänglich, mit denen Sie möglicherweise zusammenarbeiten. Dadurch werden auch alle offenen Pull Requests mit dem Zweig, an dem Sie arbeiten, aktualisiert.

```bash
git push -f
```

> Erzwingt einen Push, der andernfalls blockiert würde, weil er normalerweise bestehende Commits löscht oder überschreibt (mit Vorsicht zu verwenden!)

<br>

```bash
git push -u origin <branch>
```

> Nützlich, wenn ein neuer Zweig gepusht werden soll. Damit wird ein Upstream-Tracking-Zweig mit einer dauerhaften Beziehung zu deinem lokalen Zweig erstellt.

</details>
<br>

## Erweiterung zu `git fetch`

<details closed>

##### Mit dem Befehl git fetch werden Commits, Dateien und Verweise aus einem Remote-Repository in dein lokales Repository heruntergeladen. Das Abrufen ist dann interessant, wenn du wissen willst, woran alle anderen arbeiten. Du kannst damit die Fortschritte im zentralen Verlauf einsehen. Allerdings musst du die Änderungen nicht unbedingt in dein Repository mergen. Git isoliert abgerufene Inhalte von den vorhandenen lokalen Inhalten, sodass sie absolut keine Auswirkungen auf deine lokale Entwicklungsarbeit haben. Die abgerufenen Inhalte müssen mit dem Befehl git checkout explizit ausgecheckt werden. Daher ist das Abrufen eine gute Möglichkeit, Commits sicher zu reviewen, bevor du sie in dein lokales Repository integrierst.

```bash
git fetch
```

<br>

##### Ein wichtiger Befehl, mit dem alle registrierten Remote-Repositorys und deren Branches abgerufen werden

```bash
git fetch --all
```

</details>
<br>

## Erweiterung zu `git merge`

<details closed>

##### In Git kannst du einen geforkten Verlauf per Merging wieder zusammensetzen. Mit dem Befehl git merge kannst du die unabhängigen Entwicklungszweige, die mit git branch erstellt wurden, in einen einzigen Branch integrieren.

##### Beachte, dass alle folgenden Befehle in den aktuellen Branch gemergt werden. Der aktuelle Branch wird aktualisiert, um den Projektstand des Merges wiederzugeben, doch der Ziel-Branch bleibt davon komplett unberührt. Zur Erinnerung: Der Befehl git merge wird also oft im Zusammenhang mit git checkout zum Auswählen des aktuellen Branches und git branch -d zum Löschen des veralteten Ziel-Branches genutzt.

##### Mit git merge werden mehrere Commit-Abfolgen in einen einheitlichen Verlauf zusammengeführt. Vor allem wird git merge genutzt, um zwei Branches zu vereinen. Auf dieses Branch-Merging-Muster konzentrieren sich die folgenden Beispiele. In diesen Fällen sucht git merge zwischen zwei Commit-Pointern, was für gewöhnlich die Branch-Spitzen sind, einen gemeinsamen Basis-Commit. Sobald Git den gemeinsamen Basis-Commit gefunden hat, wird ein neuer "Merge-Commit" erstellt, um die Änderungen jeder Abfolge von Merge-Commits in der Warteschlange zusammenzuführen.

```bash
git merge --no-ff <branch>
```

</details>
<br>

## Erweiterung zu `git pull`

<details closed>

##### Der git pull-Befehl wird verwendet, um Inhalte aus einem Remote-Repository herunterzuladen und unverzüglich das lokale Repository zu aktualisieren, damit die Inhalte übereinstimmen. In Git-basierten Workflows zur Zusammenarbeit ist es häufig erforderlich, Upstream-Änderungen mit deinem lokalen Repository zusammenzuführen. Der Befehl git pull ist eigentlich eine Kombination aus zwei anderen Befehlen: git fetch gefolgt von git merge. In der ersten Phase führt git pull einen git fetch aus, der den lokalen Branch umfasst, auf den HEAD verweist. Sobald die Inhalte heruntergeladen wurden, startet git pull einen Merge-Workflow. Es wird ein neuer Merge-Commit erstellt und HEAD wird so aktualisiert, dass er auf den neuen Commit verweist.

<br>

##### Mit diesem Befehl rufst du die im angegebenen Repository hinterlegte Kopie des aktuellen Branches ab und führst diese Kopie sofort mit der lokalen Kopie zusammen. Er entspricht git fetch ＜ remote ＞ gefolgt von git merge origin/＜ aktueller-Branch ＞

```bash
git pull origin <branch>
```

<br>

##### Hiermit werden deine lokale Änderungen den Beiträgen vorangestellt, die andere bereits geliefert haben.

```bash
git checkout main
git pull --rebase origin
```

</details>
