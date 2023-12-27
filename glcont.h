HDC    hdc; 
HGLRC  hglrc; 
 
// create a rendering context  
hglrc = wglCreateContext (hdc); 
 
// make it the calling thread's current rendering context 
wglMakeCurrent (hdc, hglrc);
 
// call OpenGL APIs as desired ... 
 
// when the rendering context is no longer needed ...   
 
// make the rendering context not current  
wglMakeCurrent (NULL, NULL) ; 
 
// delete the rendering context  
wglDeleteContext (hglrc);
