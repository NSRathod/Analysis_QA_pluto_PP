
void HadesAnal::WriteHistos(void)
{
  
  float x1,x2,y1,y2;
  x1=0.52; y1=0.8;x2=0.7;y2=0.87;
   TPaveText *t1,*t2; 

   //f = new TFile("hades_PimP_D0_p.root","recreate");
   //f = new TFile("hades_PimP_bremsstrahlung_1GEV.root","recreate");
  f = new TFile("hades_PN_bremsstrahlung_627MeV_190Ek.root","recreate");
  //if (!f || !f->IsOpen()){
  //f=new TFile("SymulHe3_histos.root","recreate");
  //}

  PID_histo->Write();
  
  TCanvas *c1=new TCanvas("PlutoOut_Proton1","PlutoOut_Proton1");
  c1->Divide(2,2);
  c1->cd(1);
  PMomtot14_4pi->Draw();
  c1->cd(2);
  Pphi->Draw();
  c1->cd(3);
  Ptheta->Draw();
  c1->cd(4);
  PthetaCM->Draw();

  c1->Write();
  c1->SaveAs("PlutoOut_Proton1.png");
  
  TCanvas *c2=new TCanvas("PlutoOut_Proton2","PlutoOut_Proton2");
  c2->Divide(2,2);  
  c2->cd(1);
  Pthmom14_4pi->Draw("colz");
  c2->cd(2);
  PmomX14_4pi->Draw();
  c2->cd(3);
  PmomY14_4pi->Draw();
  c2->cd(4);
  PmomZ14_4pi->Draw();
  
  c2->Write();

  c2->SaveAs("PlutoOut_Proton2.png");
  
  TCanvas *c3=new TCanvas("PlutoOut_EpEm1","PlutoOut_EpEm1");
  c3->Divide(2,2);
  c3->cd(1);
  EpEmMomtot9_4pi->Draw();
  c3->cd(2);
  EpEmphi->Draw();
  c3->cd(3);
  EpEmtheta->Draw();
  c3->cd(4);
  EpEmthetaCM->Draw();

  c3->Write();
  c3->SaveAs("PlutoOut_EpEm1.png");

  TCanvas *c4=new TCanvas("PlutoOut_EpEm2","PlutoOut_EpEm2");
  c4->Divide(2,2);  
  c4->cd(1);
  EpEmthmom9_4pi->Draw("colz");
  c4->cd(2);
  EpEmmomX9_4pi->Draw();
  c4->cd(3);
  EpEmmomY9_4pi->Draw();
  c4->cd(4);
  EpEmmomZ9_4pi->Draw();
  
  c4->Write();
  c4->SaveAs("PlutoOut_EpEm2.png");


  TCanvas *c5=new TCanvas("PlutoOut_EP1","PlutoOut_EP1");
  c5->Divide(2,2);
  c5->cd(1);
  EPMomtot2_4pi->Draw();
  c5->cd(2);
  EPphi->Draw();
  c5->cd(3);
  EPtheta->Draw();
  c5->cd(4);
  EPthetaCM->Draw();

  c5->Write();
  c5->SaveAs("PlutoOut_EP1.png");

  TCanvas *c6=new TCanvas("PlutoOut_EP2","PlutoOut_EP2");
  c6->Divide(2,2);  
  c6->cd(1);
  EPthmom2_4pi->Draw("colz");
  c6->cd(2);
  EPmomX2_4pi->Draw();
  c6->cd(3);
  EPmomY2_4pi->Draw();
  c6->cd(4);
  EPmomZ2_4pi->Draw();
  
  c6->Write();
  c6->SaveAs("PlutoOut_EP2.png");

  TCanvas *c7=new TCanvas("PlutoOut_EM1","PlutoOut_EM1");
  c7->Divide(2,2);
  c7->cd(1);
  EMMomtot3_4pi->Draw();
  c7->cd(2);
  EMphi->Draw();
  c7->cd(3);
  EMtheta->Draw();
  c7->cd(4);
  EMthetaCM->Draw();

  c7->Write();
  c7->SaveAs("PlutoOut_EM1.png");

  TCanvas *c8=new TCanvas("PlutoOut_EM2","PlutoOut_EM2");
  c8->Divide(2,2);  
  c8->cd(1);
  EMthmom3_4pi->Draw("colz");
  c8->cd(2);
  EMmomX3_4pi->Draw();
  c8->cd(3);
  EMmomY3_4pi->Draw();
  c8->cd(4);
  EMmomZ3_4pi->Draw();

  c8->Write();
  c8->SaveAs("PlutoOut_EM2.png");

  /*  TCanvas *c9=new TCanvas("PlutoOut_EPEM","PlutoOut_EPEM");
  //c8->cd(1);
  OpnAng->Draw("colz");
  c9->Write();
  c9->SaveAs("PlutoOut_EPEM.png");*/

  

  //TCanvas *c3=new TCanvas("Out(#pi- p --> #pi- p #gamma e+ e-)","Out(#pi- p --> #pi- p #gamma e+ e-)");
  //c3->Divide(2,2);  

  //  theta_p1->Write();
  /*  thmom2_4pi->Write();
  thmom3_4pi->Write();
  thmom9_4pi->Write();
  thmom14_4pi->Write();*/

  EPtheta->Write();
  EMtheta->Write();
  Ptheta->Write();
  EpEmtheta->Write();

  EPthetaCM->Write();
  EMthetaCM->Write();
  PthetaCM->Write();
  EpEmthetaCM->Write();

  EPphi->Write();
  EMphi->Write();
  Pphi->Write();
  EpEmphi->Write();
    
  EPMass2_4pi->Write();
  EMMass3_4pi->Write();
  PMass14_4pi->Write();
  EpEmMass9_4pi->Write();
  MissingMass->Write();
  MissingMass1->Write();
  MissingMass2->Write();
  MissingMass3->Write();
  MissingMass4->Write();
  MissingMass5->Write();
  MissingMass6->Write();
  Delta_histo->Write();  
  EMthmom3_4pi->Write();
  //  EMVerX3_4pi->Write();
  //  EMVerY3_4pi->Write();
  //  EMVerZ3_4pi->Write();
      
  EMmomX3_4pi->Write();
  EMmomY3_4pi->Write();
  EMmomZ3_4pi->Write();
  EMMomtot3_4pi->Write(); 
		
  EPthmom2_4pi->Write();
  //  EPVerX2_4pi->Write();
  //  EPVerY2_4pi->Write();
  //  EPVerZ2_4pi->Write();
      
  EPmomX2_4pi->Write();
  EPmomY2_4pi->Write();
  EPmomZ2_4pi->Write();
  EPMomtot2_4pi->Write(); 
		
  Pthmom14_4pi->Write();
  PVerX14_4pi->Write();
  PVerY14_4pi->Write();
  PVerZ14_4pi->Write();
      
  PmomX14_4pi->Write();
  PmomY14_4pi->Write();
  PmomZ14_4pi->Write();
  PMomtot14_4pi->Write(); 
		
  EpEmthmom9_4pi->Write();
  //  PimVerX9_4pi->Write();
  //  PimVerY9_4pi->Write();
  //  PimVerZ9_4pi->Write();
      
  EpEmmomX9_4pi->Write();
  EpEmmomY9_4pi->Write();
  EpEmmomZ9_4pi->Write();
  EpEmMomtot9_4pi->Write(); 

  
  ALLMass->Write();

  OpnAng->Write();
  OpenAngle->Write();
  Histo->Write();
  EpEm_E->Write();
  P_E->Write();
 EP_E->Write();
 EM_E->Write();
 
    f->Write();
    f->Close();
  
}
