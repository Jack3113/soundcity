#ifndef IGENERATIONOBSERVER_H
#define IGENERATIONOBSERVER_H

#include <Track.h>

namespace SoundCity
{

/**
 * Interface pour observer La génération de la playlist.
 */
class IGenerationObserver
{
public:
  /**
   * Apellé quand un morceau est ajouté à la playlist dans le processus de
   * génération.
   * @param index Le numéro de la piste qui vient d'être ajoutée.
   * @param size  Le nombre de pistes visé par le générateur.
   * @param track La piste qui vient d'être ajoutée.
   */
  virtual void notify(std::size_t index, std::size_t size, const Track &track) = 0;
};

} // end namespace SoundCity

#endif
