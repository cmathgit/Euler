# Project Euler
# Programs to solve various problems found on Project Euler: https://projecteuler.net

# My Project Euler Profile
# https://projecteuler.net/profile/cmathsolve.png
# https://projecteuler.net/profile/cmath.png

# Problem 2 https://projecteuler.net/problem=2
# Even Fibonacci Numbers

# Project Euler's rules
# "I learned so much solving problem XXX, so is it okay to publish my solution elsewhere"?
# "The rule about sharing solutions outside of Project Euler does not apply to the first one-hundred problems".
# https://projecteuler.net/about#publish
```
It appears that you have answered your own question. There is nothing quite like that "Aha!" moment when you finally beat a problem which you have been working on for some time. It is often through the best of intentions in wishing to share our insights so that others can enjoy that moment too. Sadly, that will rarely be the case for your readers. Real learning is an active process and seeing how it is done is a long way from experiencing that epiphany of discovery. Please do not deny others what you have so richly valued yourself.

However, the rule about sharing solutions outside of Project Euler does not apply to the first one-hundred problems, as long as any discussion clearly aims to instruct methods, not just provide answers, and does not directly threaten to undermine the enjoyment of solving later problems. Problems 1 to 100 provide a wealth of helpful introductory teaching material and if you are able to respect our requirements, then we give permission for those problems and their solutions to be discussed elsewhere.
```


# Requirements
```
Python3+
JDK 17+
JRE 17+
C++ Compiler
C compiler
```

# install Python in Windows visit
```
https://docs.python.org/3/using/windows.html
```

# Check that Python is installed
```
Open CMD and type python.
If it exists, to see where this executable lives, type where python
If not, follow the instructions for installation at python.org
```

# How to compile and run in Windows (back slash)
```
python main.py
```

# install Java in Windows visit
```
https://docs.oracle.com/en/java/javase/18/install/installation-jdk-microsoft-windows-platforms.html#GUID-DAF345BA-B3E7-4CF2-B87A-B6662D691840
```
# Oracle JDK 18.0.2 Installer
```
https://www.oracle.com/java/technologies/downloads/#jdk18-windows
```

# Oracle JDK 18.0.2 Installer Tutorial
```
https://docs.oracle.com/en/java/javase/18/install/installation-jdk-microsoft-windows-platforms.html#GUID-DAF345BA-B3E7-4CF2-B87A-B6662D691840
```

# Cygwin Get that Linux feeling - on Windows
```
https://www.cygwin.com/
```

# Check if you have Linux commands on your Windows machine
```
Open CMD and type the command, e.g., ls or vim
If it exists, use where to see where it lives, e.g., where ls or where nano
If it does not exist, you will need to install something like Gitbash or CygWin
```

# Install Java (Linux, Ubuntu 20.04)
```
sudo apt update
sudo apt upgrade
sudo apt install openjdk-17-jdk openjdk-17-jre
```

# How to compile Java in Unix / Linux
```
javac -d classes/ -cp lib/sample-1.jar src/project/Example.java -verbose -Xlint:unchecked

jar --create --file lib/sample-2.jar -C classes/ .
```
# How to run Java Unix / Linux
```
java -cp lib/sample-2.jar:lib/sample-1.jar project.Example > output.txt
```

# How to run Java in Windows
```
java -cp lib/sample-2.jar;lib/sample-1.jar project.Example > output.txt
```

# Update Path Variable in Windows (Access javac, jar, and java commands)
```
Option 1. 
Open the System Properties and add the paths with the javac, jar, and java executables to your PATH environment variable.
Go to Settings >> System >> About >>  Advanced system settings >> Environment Variables >> System Variables >> Path >> Edit >> New 
copy the paths, e.g., C:\Program Files\Java\jdk-18.0.2.1\bin, into here. Also, consider adding the JAVA_HOME variable to your System Variables while you are in this menu.
Under System Variables select New. In the variable name, type JAVA_HOME (or JRE_HOME for JRE installations). In Variable Value, copy and paste the filepath of your Java installation as shown above,
e.g., "C:\Program Files\Java\jdk-18.0.2.1" or "C:\Program Files\Java\jdk-20". 


Option 2. Excute PATH command. Copy the return string (should have a list of paths semi-colon delimited). Append path to JDK binary and library directors separated by a semi-colon, e.g., 

user> PATH
PATH=C:\Program Files\Common Files\Oracle\Java\javapath;C:\cygwin64\bin

user> PATH C:\Program Files\Common Files\Oracle\Java\javapath;C:\cygwin64\bin;C:\Program Files\Java\jdk-18.0.2.1\lib;C:\Program Files\Java\jdk-18.0.2.1\bin

user> PATH
PATH=C:\Program Files\Common Files\Oracle\Java\javapath;C:\cygwin64\bin;C:\Program Files\Java\jdk-18.0.2.1\lib;C:\Program Files\Java\jdk-18.0.2.1\bin
```

# Maven JUnit (Third Party Package) Repository
```
https://mvnrepository.com/artifact/junit/junit/4.13.2
```

# Adding Maven JUnit 4.13.2 (Third Party Package) Repo to your environment (Example API Call to Download Repo File(s))
```
curl -s https://repo1.maven.org/maven2/junit/junit/4.13.2/junit-4.13.2.jar -o C:/JUnit/Junit-4.12.jar
```

# Add JUnit unit testing framework to your Windows Java Development Environment
```
To add the JUNIT_HOME variable to your System Variables while you are in this menu.
Under System Variables select New. In the variable name, type JUNIT_HOME. In Variable Value, copy and paste the filepath of your Java installation as shown above,
e.g., "C:\JUnit". 
```

# How to compile in Windows (back slash)
```
javac -d classes/ -cp lib\sample-1.jar src\project\Example.java -verbose -Xlint:unchecked
jar --create --file lib\sample-2.jar -C classes/ .
```

# How to run in Windows (semi-colon)
```
java -cp lib\sample-2.jar;lib\sample-1.jar project.Example > output.txt
```

# Maven JSON Simple 1.1.1 (Third Party Package) Repo Example
```
https://repo1.maven.org/maven2/com/googlecode/json-simple/json-simple/1.1.1/json-simple-1.1.1.jar
```

# Adding Maven JSON Simple 1.1.1 (Third Party Package) Repo to your lib directory (Example API Call to Download Repo File(s))
```
curl -s https://repo1.maven.org/maven2/com/googlecode/json-simple/json-simple/1.1.1/json-simple-1.1.1.jar -o lib\json-simple.jar
```

# Coindesk BTC API endpoint (Example API Call to retrieve JSON payload)
```
https://api.coindesk.com/v1/bpi/currentprice.json
```

# Sending a Request to Coindesk BTC API endpoint and saving the returned payload
```
curl -# -o api_payload.json https://api.coindesk.com/v1/bpi/currentprice.json
```

# Maven JSON Simple (Third Party Package) Repo
```
https://mvnrepository.com/artifact/com.googlecode.json-simple/json-simple/1.1.1
```

# How to compile in Ubuntu (forward slash)
```
javac -d classes/ -cp lib/sample-1.jar src/project/Example.java -verbose -Xlint:unchecked
jar --create --file lib/sample-2.jar -C classes/ .
```

# How to run in Ubuntu (colon)
```
java -cp lib/sample-2.jar:lib/sample-1.jar project.Example > output.txt
```

# set-up SSH (must have Git installed on your machine or use GitBash)
# this example uses git.exe from Cygwin installation 
# to see if you have git on your machine, open Windows cmd and execute C>where git

# generate SSH key (skip passphrase)
```
ssh-keygen -t rsa -b 4096 -C "<your email address : same as Github login>"
```
# enter to accept default directory or designate one, e.g., ~/.ssh/id_rsa
# enter twice to skip passphrase
# navigate to new directory where the ssh key lives
```
cd .ssh
ls
```
# id_rsa and id_rsa.pub are the private and public keys, respectively
# open the services GUI (start >> search >> services)
# start the OpenSSH Authentication Agent (Right-Click >> Startup Type: Automatic >> Service Status: Start
# open the terminal in the .ssh directory and execute
```
ssh-add ~/.ssh/id_rsa
```
# copy public key to clipboard
```
cat id_rsa.pub | clip
```
# Open Github account: settings >> SSH and GPG keys >> New SSH Key >> Title: PC >> Key: "<Paste from clipboard>" >> Add SSH Key
  
 
# How to clone repo to original machine with SSH (may be password protected)
# open the repo you want to clone from Github account: Code >> SSH >> copy <repository_url>
```
git@github.com:<username>/repo_name.git
```
# in a new shell, open the directory where you want the repo to be cloned
```
cd Desktop/projects
git clone <repository_url>
git status
```
# How to clone repo to any machine with SSH (may be password protected)
# open the repo you want to clone from Github account: Code >> HTTPS >> copy <repository_url>
```
https://github.com/username/repo_name.git
```
# in a new shell, open the directory where you want the repo to be cloned
```
cd Desktop/projects
git clone <repository_url>
git status
```

# Update remote repo
# Step 1. Stage the changes (1st status red. 2nd status green.)
```
git status
git add ./
git status
```
# Step 2. Commit the changes (identify yourself and commit : use --global for all repos or omit to set identity for this repo only)
```
git config user.email "alias@example.com"
git commit -m "upload most recent changes"
```
# Step 3. Push the changes to the remote repo
```
git push
```
# Pull from an existing repo
```
git pull.config rebase true
git pull git@github.com:username/repo_name.git
```
# or
```
git pull https://github.com/username/repo_name.git
```
# Merge with an existing repog
```
git pull.config rebase false
git pull git@github.com:username/reponame.git
``` 
# Fetch from an existing repo
```
git fetch git@github.com:username/reponame.git
```


