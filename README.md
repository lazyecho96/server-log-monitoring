# server-log-monitoring
The task of administering systems/servers is not an easy task for user. Administrators read complete log reports to find errors or failures. Also they are not able to prevent failures beforehand. This project is a utility tool which will help users to monitor performance and search log reports of system/server. This tool cannot only help monitor a single system but a bunch of systems connected through a network. The aim of the project is to gather information about the network and servers through device logs. It will consist of a search engine to find log of a particular system for a specified issue. Moreover critical warnings will be given priority while searching. User will be able to determine future failures by reading the warnings. For ex: if a system is taking too much of seek time or is unable to access a content on the disk, it may lead to disk failure. User can determine it beforehand by monitoring the performance of the system. One can access the services through GUI. Tool is supported by Linux and any log file can be read and searched throughout. 


to the file use
'''gcc finalminor1.c -o finalminor `pkg-config --cflags --libs gtk+-3.0`'''
