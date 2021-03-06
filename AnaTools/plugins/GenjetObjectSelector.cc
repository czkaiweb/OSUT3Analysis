#include "OSUT3Analysis/AnaTools/interface/ObjectSelector.h"
#include "FWCore/Framework/interface/MakerMacros.h"

#if IS_VALID(genjets)
typedef ObjectSelector<osu::Genjet, TYPE(genjets)> GenjetObjectSelector;
  DEFINE_FWK_MODULE(GenjetObjectSelector);
#endif
