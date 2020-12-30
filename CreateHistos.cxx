void HadesAnal::CreateHistos(void)
{
  //theta_p1=new TH1F("theta","theta",100,0,180);
  //theta_p1->GetXaxis()->SetTitle("theta");
  //theta_p1->GetYaxis()->SetTitle("counts");
  //  theta_p1->Write();
  /*  thmom2_4pi->Write();
  thmom3_4pi->Write();
  thmom9_4pi->Write();
  thmom14_4pi->Write();*/
  //pi0
  PID_histo = new TH1F("PID","PID",140,0,70);
  PID_histo->GetXaxis()->SetTitle("Particle_ID");
  //PID_histo->GetYaxis()->SetTitle("counts");
  
  EPtheta =new TH1F("Gamma_theta","Gamma_theta",100,0,180);
  EPtheta->GetXaxis()->SetTitle("theta");
  EPtheta->GetYaxis()->SetTitle("counts");
  
  EMtheta =new TH1F("EM_theta","EM_theta",100,0,180);
  EMtheta->GetXaxis()->SetTitle("theta");
  EMtheta->GetYaxis()->SetTitle("counts");
  
  Ptheta =new TH1F("P_theta","P_theta",100,0,180);
  Ptheta->GetXaxis()->SetTitle("theta");
  Ptheta->GetYaxis()->SetTitle("counts");
  
  EpEmtheta =new TH1F("EpEm_theta","EpEm_theta",100,0,180);
  EpEmtheta->GetXaxis()->SetTitle("theta");
  EpEmtheta->GetYaxis()->SetTitle("counts"); 
  
  EPthetaCM =new TH1F("Gamma_thetaCM","Gamma_thetaCM",100,0,360);
  EPthetaCM->GetXaxis()->SetTitle("thetaCM");
  EPthetaCM->GetYaxis()->SetTitle("counts");
  
  EMthetaCM =new TH1F("EM_thetaCM","EM_thetaCM",100,0,360);
  EMthetaCM->GetXaxis()->SetTitle("thetaCM");
  EMthetaCM->GetYaxis()->SetTitle("counts");
  
  PthetaCM =new TH1F("P_thetaCM","P_thetaCM",100,0,360);
  PthetaCM->GetXaxis()->SetTitle("thetaCM");
  PthetaCM->GetYaxis()->SetTitle("counts");
  
  EpEmthetaCM =new TH1F("EpEm_thetaCM","EpEm_thetaCM",100,0,360);
  EpEmthetaCM->GetXaxis()->SetTitle("thetaCM");
  EpEmthetaCM->GetYaxis()->SetTitle("counts"); 

  
  EPphi =new TH1F("Gamma_phi","Gamma_phi",100,-360,360);
  EPphi->GetXaxis()->SetTitle("phi");
  EPphi->GetYaxis()->SetTitle("counts");
  
  EMphi =new TH1F("EM_phi","EM_phi",100,-360,360);
  EMphi->GetXaxis()->SetTitle("phi");
  EMphi->GetYaxis()->SetTitle("counts");
  
  Pphi =new TH1F("P_phi","P_phi",100,-360,360);
  Pphi->GetXaxis()->SetTitle("phi");
  Pphi->GetYaxis()->SetTitle("counts");
  
  EpEmphi =new TH1F("EpEm_phi","EpEm_phi",100,-360,360);
  EpEmphi->GetXaxis()->SetTitle("phi");
  EpEmphi->GetYaxis()->SetTitle("counts"); 

  char name[20];
  char title[20];

  sprintf(name,"OAvsMass");
  sprintf(title,"OAvsMass; Mass; OA");
  Histo = new TH2F(name, title, 150,0,0.4,180,0.,180.);

  sprintf(name,"EM_ThetavsMom");
  sprintf(title,"EM_ThetaVsMom; Momentum; Theta");
  EMthmom3_4pi = new TH2F(name, title, 2000.,-1000.,1000.,100.,0.,180.);

  sprintf(name,"Gamma_ThetavsMom");
  sprintf(title,"Gamma_ThetaVsMom; Momentum; Theta");
  EPthmom2_4pi = new TH2F(name, title, 2000.,-1000.,1000.,100.,0.,180.);
  
  sprintf(name,"P_ThetavsMom");
  sprintf(title,"P_ThetaVsMom; Momentum; Theta");
  Pthmom14_4pi = new TH2F(name, title, 2000.,-1000.,1500.,100.,0.,180.);
  
  sprintf(name,"EpEm_ThetavsMom");
  sprintf(title,"EpEm_ThetaVsMom; Momentum; Theta");
  EpEmthmom9_4pi = new TH2F(name, title, 2000.,-1000.,1000.,100.,0.,180.);
  
  MissingMass =new TH1F("Miss_Mass","Miss_Mass",450,-0.1,0.95);
  MissingMass->GetXaxis()->SetTitle("Mass");

  Delta_histo =new TH1F("Delta_Mass","Delta_Mass",750,0.0,1.5);
  Delta_histo->GetXaxis()->SetTitle("Mass");
  
  MissingMass1 =new TH1F("Miss_Mass1","Miss_Mass1",300,-0.1,0.6);
  MissingMass1->GetXaxis()->SetTitle("Mass");
 
  MissingMass2 =new TH1F("Miss_Mass2","Miss_Mass2",300,-0.1,0.6);
  MissingMass2->GetXaxis()->SetTitle("Mass");
 
  MissingMass3 =new TH1F("Miss_Mass3","Miss_Mass3",300,-0.1,0.6);
  MissingMass3->GetXaxis()->SetTitle("Mass");
 
  MissingMass4 =new TH1F("Miss_Mass4","Miss_Mass4",300,-0.1,0.6);
  MissingMass4->GetXaxis()->SetTitle("Mass");
 
  MissingMass5 =new TH1F("Miss_Mass5","Miss_Mass5",300,-0.1,0.6);
  MissingMass5->GetXaxis()->SetTitle("Mass");
 
  MissingMass6 =new TH1F("Miss_Mass6","Miss_Mass6",300,-0.1,0.6);
  MissingMass6->GetXaxis()->SetTitle("Mass");
 
  
  EMMass3_4pi =new TH1F("EM_Mass","EM_Mass",300,-0.4,0.4);
  EMMass3_4pi->GetXaxis()->SetTitle("Mass");

  EPMass2_4pi =new TH1F("Gamma_Mass","Gamma_Mass",300,-0.4,0.4);
  EPMass2_4pi->GetXaxis()->SetTitle("Mass");

  PMass14_4pi =new TH1F("P_Mass","P_Mass",500,0.,1.2);
  PMass14_4pi->GetXaxis()->SetTitle("Mass");
  
  EpEmMass9_4pi =new TH1F("EpEm_Mass","EpEm_Mass",300,-0.2,0.6);
  EpEmMass9_4pi->GetXaxis()->SetTitle("Mass");

  ALLMass = new TH1F("All_Mass","All_Mass",600,-0.2,1.4);
  ALLMass->GetXaxis()->SetTitle("Mass");
  
  //  EMVerX3_4pi = new TH1F("EM_VertexX","EM_VertexX",1000,-100,100);
  //  EMVerX3_4pi->GetXaxis()->SetTitle("Vertex");

  //  EMVerY3_4pi = new TH1F("EM_VertexY","EM_VertexY",1000,-100,100);
  //  EMVerY3_4pi->GetXaxis()->SetTitle("Vertex");

  //  EMVerZ3_4pi = new TH1F("EM_VertexZ","EM_VertexZ",1000,-100,100);
  //  EMVerZ3_4pi->GetXaxis()->SetTitle("Vertex");

  EMmomX3_4pi =new TH1F("EM_MomX","EM_MomX",2000,-1000,1500);
  EMmomX3_4pi->GetXaxis()->SetTitle("MomentumX");

  EMmomY3_4pi =new TH1F("EM_MomY","EM_MomY",2000,-1000,1500);
  EMmomY3_4pi->GetXaxis()->SetTitle("MomentumY");

  EMmomZ3_4pi =new TH1F("EM_MomZ","EM_MomZ",2000,-1000,1500);
  EMmomZ3_4pi->GetXaxis()->SetTitle("MomentumZ");
  
  EMMomtot3_4pi =new TH1F("EM_Momtot","EM_Momtot",2000,-1000,1500);
  EMMomtot3_4pi->GetXaxis()->SetTitle("Momentum Tot");

  //  EPVerX2_4pi = new TH1F("EP_VertexX","EP_VertexX",1000,-100,100);;
  //  EPVerX2_4pi->GetXaxis()->SetTitle("Vertex");

  //  EPVerY2_4pi = new TH1F("EP_VertexY","EP_VertexY",1000,-100,100);;
  //  EPVerY2_4pi->GetXaxis()->SetTitle("Vertex");

  //  EPVerZ2_4pi = new TH1F("EP_VertexZ","EP_VertexZ",1000,-100,100);;
  //  EPVerZ2_4pi->GetXaxis()->SetTitle("Vertex");

  EPmomX2_4pi =new TH1F("Gamma_MomX","Gamma_MomX",2000,-1000,1500);
  EPmomX2_4pi->GetXaxis()->SetTitle("MomentumX");

  EPmomY2_4pi =new TH1F("Gamma_MomY","Gamma_MomY",2000,-1000,1500);
  EPmomY2_4pi->GetXaxis()->SetTitle("MomentumY");

  EPmomZ2_4pi =new TH1F("Gamma_MomZ","Gamma_MomZ",2000,-1000,1500);
  EPmomZ2_4pi->GetXaxis()->SetTitle("MomentumZ");
  
  EPMomtot2_4pi =new TH1F("Gamma_Momtot","Gamma_Momtot",2000,-1000,1500);
  EPMomtot2_4pi->GetXaxis()->SetTitle("Momentum Tot");


  PmomX14_4pi =new TH1F("P_MomX","P_MomX",2000,-1000,1500);
  PmomX14_4pi->GetXaxis()->SetTitle("MomentumX");

  PmomY14_4pi =new TH1F("P_MomY","P_MomY",2000,-1000,1500);
  PmomY14_4pi->GetXaxis()->SetTitle("MomentumY");

  PmomZ14_4pi =new TH1F("P_MomZ","P_MomZ",2000,-1000,1500);
  PmomZ14_4pi->GetXaxis()->SetTitle("MomentumZ");
  
  PMomtot14_4pi =new TH1F("P_Momtot","P_Momtot",2000,-1000,1500);
  PMomtot14_4pi->GetXaxis()->SetTitle("Momentum Tot");

  PVerX14_4pi = new TH1F("P_VertexX","P_VertexX",1000,-100,100);
  PVerX14_4pi->GetXaxis()->SetTitle("Vertex");

  PVerY14_4pi = new TH1F("P_VertexY","P_VertexY",1000,-100,100);
  PVerY14_4pi->GetXaxis()->SetTitle("Vertex");

  PVerZ14_4pi = new TH1F("P_VertexZ","P_VertexZ",1000,-100,100);
  PVerZ14_4pi->GetXaxis()->SetTitle("Vertex");


  //  PimVerX9_4pi = new TH1F("P_VertexX","P_VertexX",1000,-100,100);
  //  PimVerZ9_4pi->GetXaxis()->SetTitle("Vertex");
  //  PimVerY9_4pi = new TH1F("P_VertexX","P_VertexX",1000,-100,100);
  //  PimVerZ9_4pi->GetXaxis()->SetTitle("Vertex");
  //  PimVerZ9_4pi = new TH1F("P_VertexX","P_VertexX",1000,-100,100);
  //  PimVerZ9_4pi->GetXaxis()->SetTipi0tle("Vertex");


  EpEmmomX9_4pi =new TH1F("EpEm_MomX","EpEm_MomX",2000,-1000,1500);
  EpEmmomX9_4pi->GetXaxis()->SetTitle("MomentumX");

  EpEmmomY9_4pi =new TH1F("EpEm_MomY","EpEm_MomY",2000,-1000,1500);
  EpEmmomY9_4pi->GetXaxis()->SetTitle("MomentumY");

  EpEmmomZ9_4pi =new TH1F("EpEm_MomZ","EpEm_MomZ",2000,-1000,1500);
  EpEmmomZ9_4pi->GetXaxis()->SetTitle("MomentumZ");
  
  EpEmMomtot9_4pi =new TH1F("EpEm_Momtot","EpEm_Momtot",2000,-1000,1500);;
  EpEmMomtot9_4pi->GetXaxis()->SetTitle("Momentum Tot");
  
  OpnAng =new TH1F("OpnAng","OpnAng",50,0.,5.);
  OpnAng->GetXaxis()->SetTitle("epem_opening_angle");
  
  OpenAngle =new TH1F("OpenAngle","OpenAngle_theta",360,0.,360.);
  OpenAngle->GetXaxis()->SetTitle("epem_opening_theta_angle");

//  PimMomtot9_4pi =new TH1F("eta_Momtot","eta_Momtot",2000,-1000,1500);;
//  PimMomtot9_4pi->GetXaxis()->SetTitle("Momentum Tot");

  EpEm_E =new TH1F("N_E","N_E",2500,-1000,1500);
    P_E =new TH1F("P_E","P_E",2500,-1000,1500);
    EP_E =new TH1F("Gamma_E1","Gamma_E1",2500,-1000,1500);
    EM_E =new TH1F("Gamma_E2","Gamma_E2",2500,-1000,1500);
}
