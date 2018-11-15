{
   gStyle->SetTextFont(2);
   gStyle->SetPadTopMargin(0.05);
   gStyle->SetPadRightMargin(0.05);
   gStyle->SetPadBottomMargin(0.12);
   gStyle->SetPadLeftMargin(0.12);
   gStyle->SetOptTitle(0);
   gStyle->SetOptStat(0);
   gStyle->SetOptFit(0);
   gStyle->SetPadTickX(1);
   gStyle->SetPadTickY(1);
   gStyle->SetHistLineWidth(2.5);
   gStyle->SetLineWidth(2.);

   TCanvas *PtBroad  = new TCanvas("HERMES Transverse Momentum Broadening", "HERMES Transverse Momentum Broadening",1931,49,500,500);
   PtBroad->Range(0,0,1,1);
   PtBroad->SetFillColor(0);
   PtBroad->SetBorderMode(0);
   PtBroad->SetBorderSize(2);
   PtBroad->SetFrameBorderMode(0);
   PtBroad->SetLeftMargin(0.17);
   
   Double_t exposant = .333;
   TH1 *cnu_p = new TH2F("cnu_p"," ",10,1,pow(166.375 ,exposant),5,-0.01,.035);
   cnu_p->SetStats(0);
   cnu_p->GetXaxis()->SetTitle("A^{1/3}");
   cnu_p->GetXaxis()->CenterTitle(true);
   cnu_p->GetYaxis()->SetTitle("#DeltaP_{T}^{2} (GeV^{2})");
   cnu_p->GetYaxis()->CenterTitle(true);
   cnu_p->GetYaxis()->SetTitleOffset(1.45);
   cnu_p->GetXaxis()->SetTitleOffset(0.95);
   cnu_p->GetXaxis()->SetLabelSize(0.044);
   cnu_p->GetXaxis()->SetTitleSize(0.058);
   cnu_p->GetXaxis()->SetTitleFont(2);
   cnu_p->GetYaxis()->SetLabelSize(0.044);
   cnu_p->GetYaxis()->SetTitleSize(0.058);
   cnu_p->GetYaxis()->SetTitleFont(2);
   cnu_p->Draw("");
   

// Simul pip//
   TGraphErrors *gr0 = new TGraphErrors(4);
   gr0->SetName("Graph");
   gr0->SetTitle("Graph");
   gr0->SetFillColor(1);
   gr0->SetMarkerStyle(20);
   gr0->SetMarkerColor(4);
   gr0->SetLineColor(4);
   gr0->SetPoint(0,pow(2.  ,exposant),0.0000); gr0->SetPointError(0,0,0.0002);
   gr0->SetPoint(1,pow(20. ,exposant),0.0087); gr0->SetPointError(1,0,0.0002);
   gr0->SetPoint(2,pow(84. ,exposant),0.0216); gr0->SetPointError(2,0,0.0002);
   gr0->SetPoint(3,pow(131.,exposant),0.0255); gr0->SetPointError(3,0,0.0002);
   gr0->Draw("p");
// // // // //

// HERMES pip//
   TGraphErrors *gr1 = new TGraphErrors(4);
   gr1->SetName("Graph");
   gr1->SetTitle("Graph");
   gr1->SetFillColor(1);
   gr1->SetMarkerStyle(23);
   gr1->SetMarkerColor(2);
   gr1->SetLineColor(2);
   gr1->SetPoint(0,pow(3.7 ,exposant),-0.0011); gr1->SetPointError(0,0,0.002117);
   gr1->SetPoint(1,pow(18.5,exposant),0.0031 ); gr1->SetPointError(1,0,0.001466);
   gr1->SetPoint(2,pow(81. ,exposant),0.0158 ); gr1->SetPointError(2,0,0.001564);
   gr1->SetPoint(3,pow(126.,exposant),0.0216 ); gr1->SetPointError(3,0,0.001954);
   gr1->Draw("p");
// // // // //

// HERMES pim//
   TGraphErrors *gr2 = new TGraphErrors(4);
   gr2->SetName("Graph");
   gr2->SetTitle("Graph");
   gr2->SetFillColor(1);
   gr2->SetMarkerStyle(22);
   gr2->SetPoint(0,pow(4.5 ,exposant),0.0003); gr2->SetPointError(0,0,0.002476);
   gr2->SetPoint(1,pow(22. ,exposant),0.0065); gr2->SetPointError(1,0,0.001857);
   gr2->SetPoint(2,pow(89. ,exposant),0.0159); gr2->SetPointError(2,0,0.001922);
   gr2->SetPoint(3,pow(137.,exposant),0.0213); gr2->SetPointError(3,0,0.001792);
   gr2->Draw("p");
// // // // //


   leg = new TLegend(0.22,0.70,0.67,0.90);
   leg->AddEntry(gr1,"HERMES #pi^{+}","p");
   leg->AddEntry(gr2,"HERMES #pi^{-}","p");
   leg->AddEntry(gr0,"MC Simulation","p");
   leg->Draw();

}
