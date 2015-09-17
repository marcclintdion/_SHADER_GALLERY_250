    glBindBuffer(GL_ARRAY_BUFFER, normal_color_VBO);                                                                                                 
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, normal_color_INDICES_VBO);                                                                                                                                
    //----------------------------------------------------------------------------------------------------------------------------------------------           
    LoadIdentity(modelView);                                                                                                                                   
    Translate(modelView, normal_color_POSITION[0], normal_color_POSITION[1], normal_color_POSITION[2]);                          
    Rotate(modelView, normal_color_ROTATE[0], normal_color_ROTATE[1], normal_color_ROTATE[2], normal_color_ROTATE[3]); 

    //======================================================================================================                                                                  
    SelectShader(27);   
    //======================================================================================================                                                                  
                                                       

    glActiveTexture ( GL_TEXTURE1 );                                                                                                                           
    glBindTexture(GL_TEXTURE_2D, normal_color_NORMALMAP);                                                                                            
    //---                                                                                                                                                      
    glActiveTexture (GL_TEXTURE0);                                                                                                                             
    glBindTexture(GL_TEXTURE_2D, normal_color_TEXTUREMAP);                                                                                           
    //---------------------------------------------------------------------------------------------------------------------------------------------------      
    glDrawElements(GL_TRIANGLES, 1536, GL_UNSIGNED_INT, 0);                                                                                                     

