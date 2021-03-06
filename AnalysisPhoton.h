#ifndef AnalysisPhoton_h
#define AnalysisPhoton_h

#include "TROOT.h"
#include <string>
#include "TLorentzVector.h"

class AnalysisPhoton : public TLorentzVector {

 public:
  AnalysisPhoton() : TLorentzVector(0.,0.,0.,0.) {
    pt=0.;
    e=0.;
  };
  AnalysisPhoton(float px, float py, float pz, float e) : TLorentzVector(px, py, pz, e) {
  };
  ~AnalysisPhoton(){};

  bool passedPhotonID( const std::string& tightness ) const;
  bool isIsolated( const std::string& tightness ) const;
  bool isIsolated_hcal( const std::string& tightness ) const;
  bool isIsolated_ecal( const std::string& tightness ) const;
  bool isIsolated_nTracks( const std::string& tightness ) const;
  bool isIsolated_ptTracks( const std::string& tightness ) const;
  bool clusterMajOK( const std::string& tightness ) const;
  bool clusterMinOK( const std::string& tightness ) const;

  Float_t e;
  Float_t pt;
  Float_t eta;
  Float_t phi;

  Float_t eGen;
  Float_t ptGen;
  Float_t etaGen;
  Float_t phiGen;

  Float_t hcalIso;
  Float_t ecalIso;
  Int_t   nTrkIso;
  Float_t ptTrkIso;
  Float_t clusterMaj;
  Float_t clusterMin;
  Int_t hasPixelSeed;

  Float_t pid_hlwTrack;
  Float_t pid_hlwTrackNoDz;
  Float_t pid_twrHCAL;
  Float_t pid_HoverE;
  Float_t pid_jurECAL;
  Float_t pid_etawid;

};

#endif
