#include <gtk/gtk.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<sys/wait.h>
#include<dirent.h>
#define d1 256
int search(char pat[], char txt[], int q);
enum {
 COLUMN = 0,
  NUM_COLS
};



 static gboolean wrapper(GtkWidget *button, GdkEventKey *event, gpointer data)
{    
   


	DIR *d;
	struct dirent *dir;
	FILE* fp=NULL;
    	int opt, f,a,k;
	int run=1;
	int count=0, file_count=0;
	char name[80];
	char path[100];
	int q = 17;
	char pat[50];
	char ch, c[5000];
	char *filenames[100]; 

	
   
    if (event->keyval == 'a')
        //callback(button, data);
	{
         while(system("sudo iptraf-ng")) 
		{
 		int ret = system("./a.out");
    		if (WIFSIGNALED(ret) && (WTERMSIG(ret) == SIGINT || WTERMSIG(ret) == SIGQUIT))
		break; 
			}
					}

    if (event->keyval == 'b')
        //callback(button, data);
	{
         FILE *in;
				char buff[256];
				char ping[5];
				char cmping[64];
			
				if(!(in = popen("ifconfig | grep 'inet' | awk '/192/ {print $2}' | sed s/addr://","r")))
		    			exit(1);
		
				fgets(buff, sizeof(buff), in);
				pclose(in);
 
 		
 				strcpy(ping,"ping ");
				strcpy(cmping,ping);
				strcat(cmping,buff);
			
		
				while(system(cmping))
			{
	
				int ret = system("./a.out");
    				if (WIFSIGNALED(ret) && (WTERMSIG(ret) == SIGINT || WTERMSIG(ret) == SIGQUIT))

				break;
			}
					}

   if (event->keyval == 'c')
        //callback(button, data);
	{
         while(system("netstat -r"))
			{
				int ret = system("./a.out");
    				if (WIFSIGNALED(ret) && (WTERMSIG(ret) == SIGINT || WTERMSIG(ret) == SIGQUIT))
				break;
 			}		


					}
  if (event->keyval == 'd')
        //callback(button, data);
	{
         while(system("bmon"))
				{
				int ret = system("./a.out");
    				if (WIFSIGNALED(ret) && (WTERMSIG(ret) == SIGINT || WTERMSIG(ret) == SIGQUIT))
				break;

					} 
				}
   
  if (event->keyval == 'e')
        //callback(button, data);
	{
         while(system("speedometer -r eth0 -t eth0"))
				{ 
				  int ret = system("./a.out");
    				  if (WIFSIGNALED(ret) && (WTERMSIG(ret) == SIGINT || WTERMSIG(ret) == SIGQUIT))
				break;

					}
				}


  if (event->keyval == 'f')
        //callback(button, data);
	{
         while(system("netstat -i"))
				{
				int ret = system("./a.out");
    				if (WIFSIGNALED(ret) && (WTERMSIG(ret) == SIGINT || WTERMSIG(ret) == SIGQUIT))
				break;

					}
				}

  if (event->keyval == 'g')
        //callback(button, data);
	{
         while(system("netstat -s"))
				{  int ret = system("./a.out");
    					if (WIFSIGNALED(ret) && (WTERMSIG(ret) == SIGINT || WTERMSIG(ret) == SIGQUIT))
			
					break;
					}

					}

 if (event->keyval == 'h')
        //callback(button, data);
	{
        while(system("dstat -cd --disk-util --disk-tps")) 
		{

				int ret = system("./a.out");
    				if (WIFSIGNALED(ret) && (WTERMSIG(ret) == SIGINT || WTERMSIG(ret) == SIGQUIT))
            	
            				break;
				}
				}

 if (event->keyval == 'i')
        //callback(button, data);
	{
         while(system("sudo iotop -o")) 
			{

				int ret = system("./a.out");
    				if (WIFSIGNALED(ret) && (WTERMSIG(ret) == SIGINT || WTERMSIG(ret) == SIGQUIT))
            	
            				break;
			} }

 if (event->keyval == 'j')
        //callback(button, data);
	{
         while(system("atop 2"))
				{  int ret = system("./a.out");
    				if (WIFSIGNALED(ret) && (WTERMSIG(ret) == SIGINT || WTERMSIG(ret) == SIGQUIT))
		
					break; }
 }


 if (event->keyval == 'k')
        //callback(button, data);
	{
         while(system("sudo ioping /dev/sda5"))
			{	int ret = system("./a.out");
    				if (WIFSIGNALED(ret) && (WTERMSIG(ret) == SIGINT || WTERMSIG(ret) == SIGQUIT))
		
					break;	}	
}
 if (event->keyval == 'l')
        //callback(button, data);
	{
         while(run)
			{	

			d = opendir("/home/abhimanyu/");
			if((dir = readdir(d)) == NULL)
			{	
				printf("error opening");
			}
			while ((dir = readdir(d)) != NULL)
			{
				printf("%s\n", dir->d_name);
			}
			printf("Enter name of file you want to open");
			scanf("%s", name);
			strcpy(path, "/home/abhimanyu/");
			strcat(path, name);
			printf("\n %s", path);
			fp=fopen(path, "r");
			if (fp == NULL)
    			{
       				printf("Error! opening file");
        			// Program exits if file pointer returns NULL.
       				exit(1);         
    			}
			printf("\nEnter pattern:");
    			scanf("%s", pat); 
			while( ( ch = fgetc(fp) ) != EOF )
      			{
	    			c==NULL;
 	   			// reads text until newline 
 	   			fscanf(fp,"%[^\n]", c);
				f=search(pat, c, q);
				if(f==0)
				{
					continue;
				}	
				if(f==1)
				{
    	   				printf("\n%s\n", c);
					count++;
				}
			}
			if(count==0)
			{
				printf("No matching string found\n");
			}
 	
   			fclose(fp);
			closedir(d);
			printf("Want to search again? \n 0 No \n 1 Yes");
			scanf("%d", &run);
			break;	}	
}

 if (event->keyval == 'm')
        //callback(button, data);
	{
         while(run)
		{	
			d = opendir("/home/abhimanyu/");
			if((dir = readdir(d)) == NULL)
			{	
				printf("error opening");
			}
			while ((dir = readdir(d)) != NULL)
			{
				printf("%s\n", dir->d_name);
			}
			printf("Enter name of file you want to open");
			scanf("%s", name);
			strcpy(path, "/home/abhimanyu/");
			strcat(path, name);
			printf("\n %s", path);
			fp=fopen(path, "r");
			if (fp == NULL)
    			{
       				printf("Error! opening file");
        			// Program exits if file pointer returns NULL.
       				exit(1);         
    			}
			printf("\nEnter pattern:");
    			scanf("%s", pat); 
			while( ( ch = fgetc(fp) ) != EOF )
      			{
	    			c==NULL;
 	   			// reads text until newline 
 	   			fscanf(fp,"%[^\n]", c);
				f=search(pat, c, q);
				if(f==0)
				{
					continue;
				}	
				if(f==1)
				{
    	   				printf("\n%s", c);
				}
			}
			fclose(fp);
			closedir(d);	
			break;	}	
}

  if (event->keyval == 'n')
        //callback(button, data);
	{
         d = opendir("/home/abhimanyu/");
			printf("Enter pattern:");
    			scanf("%s", pat);
			printf("%s\n",pat);
			if((dir = readdir(d)) == NULL)
			{	
				printf("error opening");
			}
			//printf("running");	
			while ((dir = readdir(d)) != NULL)
			{
			 	filenames[k] = malloc(strlen(dir->d_name)+1);          			 	
				strcpy(filenames[k],dir->d_name);
          			 	//printf("%s", filenames[k]);
          			 	//printf("\n");
          			 	k++;
					file_count++;
			}
			
			printf("file count:%d",file_count);
			printf("%s", pat);
			for (a = 0; a < file_count; a++)
			{
				count=0;
				c==NULL;
         			printf("Searching in %s", filenames[a]);
				strcpy(path, "/home/abhimanyu/");
				strcat(path, filenames[a]);
				printf("%s",path);
         			printf("\n");
				fp=fopen(path, "r");
				if (fp == NULL)
    				{
       					printf("Error! opening file");
        				// Program exits if file pointer returns NULL.
       					exit(1);         
    				} 
				while( ( ch = fgetc(fp) ) != EOF )
      				{
 	   				// reads text until newline 
 	   				fscanf(fp,"%[^\n]", c);
					f=search(pat, c, q);
					if(f==0)
					{
						continue;
					}	
					if(f==1)
					{
    	   					printf("\n%s\n", c);
						count++;
					}
				printf("%d", count);
				}
				if(count==0)
				{
					printf("No matching string found\n");
				}
 	
   				fclose(fp);
				
			
      			
			printf("done");
			closedir(d);
			printf("Want to search again? \n 0 No \n 1 Yes");
			scanf("%d", &run);
			break;	
		}	
	}

    return FALSE;
}


GtkTreeModel *create_and_fill_model(void) 
{
    
  GtkTreeStore *treestore;
  GtkTreeIter toplevel, child;

  treestore = gtk_tree_store_new(NUM_COLS,
                  G_TYPE_STRING);

  gtk_tree_store_append(treestore, &toplevel, NULL);
  gtk_tree_store_set(treestore, &toplevel,COLUMN, " NETWORK MONITORING", -1);

  gtk_tree_store_append(treestore, &child, &toplevel);
  gtk_tree_store_set(treestore, &child,  COLUMN, "a) System Network monitoring",-1);
  
  gtk_tree_store_append(treestore, &child, &toplevel);
  gtk_tree_store_set(treestore, &child, COLUMN, "b) System ip Stats",-1);
  
  gtk_tree_store_append(treestore, &child, &toplevel);
  gtk_tree_store_set(treestore, &child,COLUMN, "c) Router information",-1);
  
  gtk_tree_store_append(treestore, &child, &toplevel);
  gtk_tree_store_set(treestore, &child,COLUMN, "d) Network Traffic Monitoring", -1);
                     

gtk_tree_store_append(treestore, &child, &toplevel);
  gtk_tree_store_set(treestore, &child,COLUMN, "e)Network Realtime speed stats ",-1);
                     
                     
gtk_tree_store_append(treestore, &child, &toplevel);
  gtk_tree_store_set(treestore, &child, COLUMN, "f)Network Interfaces Info ",-1);
                    
                     
gtk_tree_store_append(treestore, &child, &toplevel);
  gtk_tree_store_set(treestore, &child,COLUMN, "g) Network Statistics", -1);
                     
                    
  gtk_tree_store_append(treestore, &toplevel, NULL);
  gtk_tree_store_set(treestore, &toplevel, COLUMN, "DISK MONITORING",-1);

                    
                     
  gtk_tree_store_append(treestore, &child, &toplevel);
  gtk_tree_store_set(treestore, &child, COLUMN, "h) System Level Disk Statistics", -1);

                    
                  
  gtk_tree_store_append(treestore, &child, &toplevel);
  gtk_tree_store_set(treestore, &child,COLUMN, "i) Disk Real-time Disk activity",-1);
                     
                     

  gtk_tree_store_append(treestore, &child, &toplevel);
  gtk_tree_store_set(treestore, &child, COLUMN, "j) System Load Stats(real time)",-1);
                    
                     
  gtk_tree_store_append(treestore, &child, &toplevel);
  gtk_tree_store_set(treestore, &child, COLUMN, "k) Disk latancy check",-1);

 
  gtk_tree_store_append(treestore, &toplevel, NULL);
  gtk_tree_store_set(treestore, &toplevel, COLUMN, "SEARCH",-1);

  gtk_tree_store_append(treestore, &child, &toplevel);
  gtk_tree_store_set(treestore, &child, COLUMN, "l) network search",-1);

   gtk_tree_store_append(treestore, &child, &toplevel);
  gtk_tree_store_set(treestore, &child, COLUMN, "m) Disk search",-1);

   gtk_tree_store_append(treestore, &child, &toplevel);
  gtk_tree_store_set(treestore, &child, COLUMN, "n) search for file",-1);

                    
                     
  return GTK_TREE_MODEL(treestore);
}

GtkWidget *create_view_and_model(void) 
{
    
  GtkTreeViewColumn *col;
  GtkCellRenderer *renderer;
  GtkWidget *view;
  GtkTreeModel *model;

  view = gtk_tree_view_new();

  col = gtk_tree_view_column_new();
  gtk_tree_view_column_set_title(col, "Monitoring System");
  gtk_tree_view_append_column(GTK_TREE_VIEW(view), col);

  renderer = gtk_cell_renderer_text_new();
  gtk_tree_view_column_pack_start(col, renderer, TRUE);
  gtk_tree_view_column_add_attribute(col, renderer, "text", COLUMN);

  model = create_and_fill_model();
  gtk_tree_view_set_model(GTK_TREE_VIEW(view), model);
  g_object_unref(model); 

  return view;
}


int main(int argc, char *argv[]) 
{
    
  GtkWidget *window;
  GtkWidget *view;
  GtkTreeSelection *selection; 
  GtkWidget *vbox;
 



  gtk_init(&argc, &argv);

  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
  gtk_window_set_title(GTK_WINDOW(window), "Minor Project");
  gtk_widget_set_size_request(window, 640, 480);

  vbox = gtk_box_new(FALSE, 2);
  gtk_container_add(GTK_CONTAINER(window), vbox);


  view = create_view_and_model();



  selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(view));


  gtk_box_pack_start(GTK_BOX(vbox), view, TRUE, TRUE, 1);

  g_signal_connect(view, "key-press-event", G_CALLBACK(wrapper), NULL);

  g_signal_connect(window,"delete-event",G_CALLBACK(gtk_main_quit),NULL);  

  gtk_widget_show_all(window);

  gtk_main();

  return 0;
}
int search(char pat[], char txt[], int q)
{
    int found=0;
    int M = strlen(pat);
    int N = strlen(txt);
    int i, j;
    int p = 0; // hash value for pattern
    int t = 0; // hash value for txt
    int h = 1;
   
    // The value of h would be "pow(d1, M-1)%q"
	
    for (i = 0; i < M-1; i++)
    {    h = (h*d1)%q;
	
    }	
    // Calculate the hash value of pattern and first
    // window of text
    for (i = 0; i < M; i++)
    {
        p = (d1*p + pat[i])%q;
        t = (d1*t + txt[i])%q;
	
    }
	
 
    // Slide the pattern over text one by one
    for (i = 0; i <= N - M; i++)
    {	
	
 
        // Check the hash values of current window of text
        // and pattern. If the hash values match then only
        // check for characters on by one
        if ( p == t )
        {
            /* Check for characters one by one */
            for (j = 0; j < M; j++)
            {
                if (txt[i+j] != pat[j])
                    break;
            }
 
            // if p == t and pat[0...M-1] = txt[i, i+1, ...i+M-1]
            if (j == M)
	    {
                
	   	found=1;
            }
	}
 
        // Calculate hash value for next window of text: Remove
        // leading digit, add trailing digit
            if ( i < N-M )
            {
            	t = (d1*(t - txt[i]*h) + txt[i+M])%q;
 
            	// We might get negative value of t, converting it
            	// to positive
            	if (t < 0)
            	t = (t + q);
            }
    	}
     
	
	
    return found;
}

