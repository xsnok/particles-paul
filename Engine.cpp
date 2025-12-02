#include "Engine.h"

Engine::Engine() {
  VideoMode comp = VideoMode::getDesktopMode();
  m_window.create(desktop, "Click for particles!");
}
void Engine::run() {
  Clock clock;
  Time dt;
  float sec;

  cout << "Starting Particle unit tests..." << endl;
  Particle p(m_Window, 4, { (int)m_Window.getSize().x / 2, (int)m_Window.getSize().y / 2 });
  p.unitTests();
  cout << "Unit tests complete.  Starting engine..." << endl;
  while (m_window.isOpen()) {
    dt = clock.restart();
    sec = dt.asSeconds();
    input();
    update(sec);
    draw();
  }
}
void Engine::input() {
  Event event;
  if (event,type == Evebt::KeyPressed) {
    if (event.key.code == Keyboard::Escape) {
      m_window.close();
    }
  }
  if (event.type == Event::MouseButtonPressed) {
    if (event.mouseButton.button == Mouse::Left) {

    }
  }
}
void Engine::update(float dtAsSeconds) {

}
void Engine::draw() {

}
