#version 450

layout(location = 0) in vec3 vColor;
layout(location = 1) in float colourIndex;

layout(location = 0) out vec4 fragColor;

void main()
{
    if (colourIndex > 4.1f)
    {
        fragColor = vec4(vec3(1.0f, 1.0f, 1.0f), 1.0); //white
    }
    else if (colourIndex > 3.1f)
    {
        fragColor = vec4(vec3(1.0f, 1.0f, 0.0f), 1.0); //yellow
    }
    else if (colourIndex > 2.1f)
    {
        fragColor = vec4(vec3(0.0f, 0.0f, 1.0f), 1.0); //blue
    }
    else if (colourIndex > 1.1f)
    {
        fragColor = vec4(vec3(0.0f, 1.0f, 0.0f), 1.0); //green
    }
    else if (colourIndex > .1f)
    {
        fragColor = vec4(vec3(1.0f, 0.0f, 0.0f), 1.0); //red
    }
    else
    {
        fragColor = vec4(vColor, 1.0);
    }
}
