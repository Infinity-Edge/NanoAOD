// -*- C++ -*-
//
// Package:    PhysicsTools/NanoAOD
// Class:      BaseMVAValueMapProducer
// 
/**\class BaseMVAValueMapProducer BaseMVAValueMapProducer.cc PhysicsTools/NanoAOD/plugins/BaseMVAValueMapProducer.cc

 Description: [one line class summary]

 Implementation:
     [Notes on implementation]
*/
//
// Original Author:  Andre Rizzi
//         Created:  Mon, 07 Sep 2017 09:18:03 GMT
//
//



#include "DataFormats/PatCandidates/interface/Muon.h"
#include "DataFormats/PatCandidates/interface/Electron.h"
#include "DataFormats/PatCandidates/interface/Jet.h"


#include "PhysicsTools/NanoAOD/plugins/BaseMVAValueMapProducer.h"

typedef BaseMVAValueMapProducer<pat::Jet> JetBaseMVAValueMapProducer;
typedef BaseMVAValueMapProducer<pat::Muon> MuonBaseMVAValueMapProducer;
typedef BaseMVAValueMapProducer<pat::Electron> EleBaseMVAValueMapProducer;

//define this as a plug-in
DEFINE_FWK_MODULE(JetBaseMVAValueMapProducer);
DEFINE_FWK_MODULE(MuonBaseMVAValueMapProducer);
DEFINE_FWK_MODULE(EleBaseMVAValueMapProducer);

