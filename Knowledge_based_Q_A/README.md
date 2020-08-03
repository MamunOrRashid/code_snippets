# Knowledge_based_Q_A
```Library Installation process in Ubuntu```

### (base) mp@mp:~$ sudo pip3 install --upgrade speechrecognition
[sudo] password for mp: 
WARNING: The directory '/home/mp/.cache/pip/http' or its parent directory is not owned by the current user and the cache has been disabled. Please check the permissions and owner of that directory. If executing pip with sudo, you may want sudo's -H flag.
WARNING: The directory '/home/mp/.cache/pip' or its parent directory is not owned by the current user and caching wheels has been disabled. check the permissions and owner of that directory. If executing pip with sudo, you may want sudo's -H flag.
Requirement already up-to-date: speechrecognition in /usr/local/lib/python3.6/dist-packages (3.8.1)
### (base) mp@mp:~$ idle3
### (base) mp@mp:~$ pip install --upgrade pip
Collecting pip
  Downloading https://files.pythonhosted.org/packages/00/b6/9cfa56b4081ad13874b0c6f96af8ce16cfbc1cb06bedf8e9164ce5551ec1/pip-19.3.1-py2.py3-none-any.whl (1.4MB)
     |████████████████████████████████| 1.4MB 249kB/s 
Installing collected packages: pip
  Found existing installation: pip 19.1.1
    Uninstalling pip-19.1.1:
      Successfully uninstalled pip-19.1.1
Successfully installed pip-19.3.1
### (base) mp@mp:~$ pip --version
pip 19.3.1 from /home/mp/anaconda3/lib/python3.7/site-packages/pip (python 3.7)
### (base) mp@mp:~$ sudo apt-get update
Hit:1 http://packages.microsoft.com/repos/vscode stable InRelease
Hit:2 https://deb.opera.com/opera-stable stable InRelease                      
Hit:3 https://dl.winehq.org/wine-builds/ubuntu bionic InRelease                
Hit:4 http://archive.canonical.com/ubuntu bionic InRelease                     
Hit:5 http://ppa.launchpad.net/numix/ppa/ubuntu bionic InRelease               
Get:6 http://security.ubuntu.com/ubuntu bionic-security InRelease [88.7 kB]    
Hit:7 http://ppa.launchpad.net/obsproject/obs-studio/ubuntu bionic InRelease   
Hit:8 http://bd.archive.ubuntu.com/ubuntu bionic InRelease                     
Hit:9 https://download.sublimetext.com apt/stable/ InRelease                   
Get:10 http://bd.archive.ubuntu.com/ubuntu bionic-updates InRelease [88.7 kB]  
Get:11 http://bd.archive.ubuntu.com/ubuntu bionic-backports InRelease [74.6 kB]
Fetched 252 kB in 4s (63.7 kB/s)                       
Reading package lists... Done
(base) mp@mp:~$ 
(base) mp@mp:~$ 
(base) mp@mp:~$ 
(base) mp@mp:~$ 
### (base) mp@mp:~$ pip install SpeechRecognition
Collecting SpeechRecognition
  Using cached https://files.pythonhosted.org/packages/26/e1/7f5678cd94ec1234269d23756dbdaa4c8cfaed973412f88ae8adf7893a50/SpeechRecognition-3.8.1-py2.py3-none-any.whl
Installing collected packages: SpeechRecognition
Successfully installed SpeechRecognition-3.8.1
### (base) mp@mp:~$ python3 --version
Python 3.7.3
### (base) mp@mp:~$ conda info

     active environment : base
    active env location : /home/mp/anaconda3
            shell level : 1
       user config file : /home/mp/.condarc
 populated config files : /home/mp/.condarc
          conda version : 4.7.12
    conda-build version : 3.18.8
         python version : 3.7.3.final.0
       virtual packages : 
       base environment : /home/mp/anaconda3  (writable)
           channel URLs : https://repo.anaconda.com/pkgs/main/linux-64
                          https://repo.anaconda.com/pkgs/main/noarch
                          https://repo.anaconda.com/pkgs/r/linux-64
                          https://repo.anaconda.com/pkgs/r/noarch
          package cache : /home/mp/anaconda3/pkgs
                          /home/mp/.conda/pkgs
       envs directories : /home/mp/anaconda3/envs
                          /home/mp/.conda/envs
               platform : linux-64
             user-agent : conda/4.7.12 requests/2.22.0 CPython/3.7.3 Linux/5.0.0-32-generic ubuntu/18.04.3 glibc/2.27
                UID:GID : 1000:1000
             netrc file : None
           offline mode : False

### (base) mp@mp:~$ conda install -c anaconda pyaudio
Collecting package metadata (current_repodata.json): done
Solving environment: done

## Package Plan ##

  environment location: /home/mp/anaconda3

  added / updated specs:
    - pyaudio


The following packages will be downloaded:

    package                    |            build
    ---------------------------|-----------------
    ca-certificates-2019.10.16 |                0         131 KB  anaconda
    certifi-2019.9.11          |           py37_0         154 KB  anaconda
    conda-4.7.12               |           py37_0         3.0 MB  anaconda
    openssl-1.1.1              |       h7b6447c_0         5.0 MB  anaconda
    portaudio-19.6.0           |       h14c3975_2          78 KB  anaconda
    pyaudio-0.2.11             |   py37h14c3975_1          69 KB  anaconda
    ------------------------------------------------------------
                                           Total:         8.4 MB

The following NEW packages will be INSTALLED:

  portaudio          anaconda/linux-64::portaudio-19.6.0-h14c3975_2
  pyaudio            anaconda/linux-64::pyaudio-0.2.11-py37h14c3975_1

The following packages will be UPDATED:

  ca-certificates    pkgs/main::ca-certificates-2019.8.28-0 --> anaconda::ca-certificates-2019.10.16-0
  openssl              pkgs/main::openssl-1.1.1d-h7b6447c_2 --> anaconda::openssl-1.1.1-h7b6447c_0

The following packages will be SUPERSEDED by a higher-priority channel:

  certifi                                         pkgs/main --> anaconda
  conda                                           pkgs/main --> anaconda


Proceed ([y]/n)? y


Downloading and Extracting Packages
certifi-2019.9.11    | 154 KB    | ###################################################################### | 100% 
conda-4.7.12         | 3.0 MB    | ###################################################################### | 100% 
portaudio-19.6.0     | 78 KB     | ###################################################################### | 100% 
pyaudio-0.2.11       | 69 KB     | ###################################################################### | 100% 
openssl-1.1.1        | 5.0 MB    | ###################################################################### | 100% 
ca-certificates-2019 | 131 KB    | ###################################################################### | 100% 
Preparing transaction: done
Verifying transaction: done
Executing transaction: done
### (base) mp@mp:~$ sudo apt-get update
Hit:1 https://deb.opera.com/opera-stable stable InRelease
Hit:2 https://dl.winehq.org/wine-builds/ubuntu bionic InRelease                                                 
Hit:3 http://packages.microsoft.com/repos/vscode stable InRelease                                               
Hit:4 http://bd.archive.ubuntu.com/ubuntu bionic InRelease                                                      
Hit:5 http://archive.canonical.com/ubuntu bionic InRelease                                                      
Get:6 http://security.ubuntu.com/ubuntu bionic-security InRelease [88.7 kB]                                     
Hit:7 http://ppa.launchpad.net/numix/ppa/ubuntu bionic InRelease                                                
Hit:8 http://ppa.launchpad.net/obsproject/obs-studio/ubuntu bionic InRelease                                    
Get:9 http://bd.archive.ubuntu.com/ubuntu bionic-updates InRelease [88.7 kB]                               
Hit:10 https://download.sublimetext.com apt/stable/ InRelease                                                   
Get:11 http://bd.archive.ubuntu.com/ubuntu bionic-backports InRelease [74.6 kB]                                 
Fetched 252 kB in 4s (68.4 kB/s)                        
Reading package lists... Done



### .................................................................................
## python speech recognition no default input device available
https://github.com/ContinuumIO/anaconda-issues/issues/4139

I was able to reproduce the problem on my Linux machine. The main problem seems to be that the portaudio library shipped in the anaconda distribution doesn't link to libasound2 (which comes from alsa-libs).

I have test builds of portaudio and pyaudio on my channel. Please give them a try:

```conda install nwani::portaudio nwani::pyaudio```
