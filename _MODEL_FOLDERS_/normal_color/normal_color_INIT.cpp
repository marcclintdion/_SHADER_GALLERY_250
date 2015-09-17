        //------------------------------------------------------------------------------------------                                                       
        #ifdef __APPLE__                                                                                                                                   
        //---------------                                                                                                                                  
        filePathName = [[NSBundle mainBundle] pathForResource:@"normal_color_DOT3" ofType:@"png"];                                           
        if(filePathName != nil)                                                                                                                                
        {                                                                                                                                                  
                image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
                glGenTextures(1, &normal_color_NORMALMAP);                                                                                       
                glBindTexture(GL_TEXTURE_2D, normal_color_NORMALMAP);                                                                            
                ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
                imgDestroyImage(image);                                                                                                                    
        }else                                                                                                                                              
            {                                                                                                                                              
               //add error file output here                                                                                                                
            }                                                                                                                                              
            filePathName = nil;                                                                                                                            
        //---------------------                                                                                                                            
        filePathName = [[NSBundle mainBundle] pathForResource:@"normal_color" ofType:@"png"];                                                
        if(filePathName != nil)                                                                                                                                
        {                                                                                                                                                  
                image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
                glGenTextures(1, &normal_color_TEXTUREMAP);                                                                                      
                glBindTexture(GL_TEXTURE_2D, normal_color_TEXTUREMAP);                                                                           
                ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
                imgDestroyImage(image);                                                                                                                    
        }else                                                                                                                                              
            {                                                                                                                                              
               //add error file output here                                                                                                                
            }                                                                                                                                              
            filePathName = nil;                                                                                                                            
        //---------------                                                                                                                                  
        #endif                                                                                                                                             
        //------------------------------------------------------------------------------------------                                                       
        #ifdef WIN32                                                                                                                                       
        loadTexture("_MODEL_FOLDERS_/normal_color/normal_color_DOT3.png",          normal_color_NORMALMAP);                
        loadTexture("_MODEL_FOLDERS_/normal_color/normal_color.png",               normal_color_TEXTUREMAP);               
        #endif                                                                                                                                             
        //------------------------------------------------------------------------------------------------------------//___LOAD_VBO                        
        #include    "normal_color.cpp"                                                                                                         
        glGenBuffers(1,              &normal_color_VBO);                                                                                         
        glBindBuffer(GL_ARRAY_BUFFER, normal_color_VBO);                                                                                         
        glBufferData(GL_ARRAY_BUFFER, sizeof(normal_color), normal_color, GL_STATIC_DRAW);                                             
        glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                                  
        //------------------------------------------------------------------------------------------------------------                                     
        #include    "normal_color_INDICES.cpp"                                                                                                 
        glGenBuffers(1,              &normal_color_INDICES_VBO);                                                                                   
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, normal_color_INDICES_VBO);                                                                           
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(normal_color_INDICES), normal_color_INDICES, GL_STATIC_DRAW);                       
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                                            
        //------------------------------------------------------------------------------------------------------------                                       

