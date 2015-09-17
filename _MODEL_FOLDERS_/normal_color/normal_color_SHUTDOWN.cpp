                    if(normal_color_NORMALMAP != 0)                                                                                                      
                    {                                                                                                                                              
                            glDeleteTextures(1, &normal_color_NORMALMAP);                                                                                
                            normal_color_NORMALMAP = 0;                                                                                                  
                    }                                                                                                                                              
                    if(normal_color_TEXTUREMAP  != 0)                                                                                                    
                    {                                                                                                                                              
                            glDeleteTextures(1, &normal_color_TEXTUREMAP);                                                                               
                            normal_color_TEXTUREMAP  = 0;                                                                                                
                    }                                                                                                                                              
                    if(normal_color_VBO  != 0)                                                                                                           
                    {                                                                                                                                              
                            glDeleteBuffers(1, &normal_color_VBO);                                                                                       
                            normal_color_VBO  = 0;                                                                                                       
                    }                                                                                                                                              
                    if(normal_color_INDICES_VBO  != 0)                                                                                                   
                    {                                                                                                                                              
                            glDeleteBuffers(1, &normal_color_INDICES_VBO);                                                                               
                            normal_color_INDICES_VBO  = 0;                                                                                               
                    }                                                                                                                                              
