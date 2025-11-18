#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
    // Create a window with 800x600 resolution
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Basic Window Test");
    
    // Set frame rate limit to 60 FPS
    window.setFramerateLimit(60);
    
    std::cout << "SFML Window created successfully!" << std::endl;
    std::cout << "Window size: 800x600" << std::endl;
    std::cout << "Press ESC or close the window to exit." << std::endl;
    
    // Create a simple circle shape for visual feedback
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    shape.setPosition(300.f, 200.f);
    
    // Main event loop
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window on close event
            if (event.type == sf::Event::Closed)
            {
                std::cout << "Window closed by user." << std::endl;
                window.close();
            }
            
            // Close window on ESC key press
            if (event.type == sf::Event::KeyPressed)
            {
                if (event.key.code == sf::Keyboard::Escape)
                {
                    std::cout << "ESC key pressed. Closing window." << std::endl;
                    window.close();
                }
            }
        }
        
        // Clear the window with black color
        window.clear(sf::Color::Black);
        
        // Draw the circle shape
        window.draw(shape);
        
        // Display the rendered frame
        window.display();
    }
    
    std::cout << "SFML Window test completed successfully!" << std::endl;
    
    return 0;
}
