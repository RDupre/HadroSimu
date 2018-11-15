{
//=========Macro generated from canvas: c8 /c8 
//=========  (Sat Feb 12 12:23:47 2011) by ROOT version5.28/00
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

   TCanvas *c8  = new TCanvas("c8 ", "c8 ",751,53,500,500);
   c8->Range(-23.875,-0.025,224.875,0.225);
   c8->SetBorderSize(2);
   c8->SetFrameFillColor(0);
   c8->SetBorderMode(0);
   c8->SetFrameBorderMode(0);
   c8->SetLeftMargin(0.17);
   c8->SetLogx();
   
   TH2F *cq2_p = new TH2F("cq2_p","#DeltaP_{T}^{2} % Q^{2}",25,1,10,5,-0.02,0.14);
   cq2_p->SetStats(0);
   cq2_p->GetXaxis()->SetTitle("Q^{2} (GeV^{2})");
   cq2_p->GetXaxis()->CenterTitle(true);
   cq2_p->GetYaxis()->SetTitle("#DeltaP_{T}^{2} (GeV^{2})");
   cq2_p->GetYaxis()->CenterTitle(true);
   cq2_p->GetYaxis()->SetTitleOffset(1.35);
   cq2_p->GetXaxis()->SetTitleOffset(0.85);
   cq2_p->GetXaxis()->SetLabelSize(0.044);
   cq2_p->GetXaxis()->SetTitleSize(0.058);
   cq2_p->GetXaxis()->SetTitleFont(2);
   cq2_p->GetYaxis()->SetLabelSize(0.044);
   cq2_p->GetYaxis()->SetTitleSize(0.058);
   cq2_p->GetYaxis()->SetTitleFont(2);
   cq2_p->Draw("");
   
   TGraphErrors *gr4 = new TGraphErrors(4);
   gr4->SetName("Graph");
   gr4->SetTitle("Graph");
   gr4->SetFillColor(1);
   gr4->SetMarkerStyle(8);
// gr4->SetPoint(0,1.65,0.0195); gr4->SetPointError(0,0,0.0000);
// gr4->SetPoint(1,2.75,0.0247); gr4->SetPointError(1,0,0.0050);
// gr4->SetPoint(2,4.40,0.0325); gr4->SetPointError(2,0,0.0051);
// gr4->SetPoint(3,7.00,0.03  ); gr4->SetPointError(3,0,0.0088);
   gr4->SetPoint(0,1.4,0.0186); gr4->SetPointError(0,0,sqrt(0.0021*0.0021+0.0013*0.0013));
   gr4->SetPoint(1,2.5,0.0220); gr4->SetPointError(1,0,sqrt(0.0033*0.0033+0.0026*0.0026));
   gr4->SetPoint(2,3.9,0.0277); gr4->SetPointError(2,0,sqrt(0.0040*0.0040+0.0020*0.0020));
   gr4->SetPoint(3,6.5,0.0288); gr4->SetPointError(3,0,sqrt(0.0064*0.0064+0.0028*0.0028));
   gr4->Draw("p");

   TGraphErrors *gr0 = new TGraphErrors(7);
   gr0->SetName("Graph");
   gr0->SetTitle("Graph");
   gr0->SetFillColor(1);
   gr0->SetLineColor(6);
   gr0->SetLineStyle(4);
   gr0->SetLineWidth(3);
   gr0->SetPoint(0,1.64,-0.0077534);
   gr0->SetPoint(1,2.92,-0.0075716);
   gr0->SetPoint(2,4.21,-0.0066309);
   gr0->SetPoint(3,5.5 ,-0.0073402);
   gr0->SetPoint(4,6.78,-0.0104855);
   gr0->SetPoint(5,8.07,-0.0113481);
   gr0->SetPoint(6,9.35,-0.0088418);
   gr0->Draw("c");
   
   TGraphErrors *gr1 = new TGraphErrors(7);
   gr1->SetName("Graph");
   gr1->SetTitle("Graph");
   gr1->SetFillColor(1);
   gr1->SetLineColor(4);
   gr1->SetLineStyle(2);
   gr1->SetLineWidth(3);
   gr1->SetPoint(0,1.64,0.03456789);
   gr1->SetPoint(1,2.92,0.03534269);
   gr1->SetPoint(2,4.21,0.03468633);
   gr1->SetPoint(3,5.5 ,0.03700295);
   gr1->SetPoint(4,6.78,0.03682795);
   gr1->SetPoint(5,8.07,0.03354686);
   gr1->SetPoint(6,9.35,0.03854367);
   gr1->Draw("c");
   
   TGraphErrors *gr2 = new TGraphErrors(7);
   gr2->SetName("Graph");
   gr2->SetTitle("Graph");
   gr2->SetFillColor(1);
   gr2->SetLineColor(3);
   gr2->SetLineStyle(1);
   gr2->SetLineWidth(3);
   gr2->SetPoint(0,1.64,0.07271594);
   gr2->SetPoint(1,2.92,0.07262775);
   gr2->SetPoint(2,4.21,0.07352349);
   gr2->SetPoint(3,5.5 ,0.07566404);
   gr2->SetPoint(4,6.78,0.07622308);
   gr2->SetPoint(5,8.07,0.07577783);
   gr2->SetPoint(6,9.35,0.07967934);
   gr2->Draw("c");
   
   TGraphErrors *gr3 = new TGraphErrors(7);
   gr3->SetName("Graph");
   gr3->SetTitle("Graph");
   gr3->SetFillColor(1);
   gr3->SetLineColor(2);
   gr3->SetLineStyle(8);
   gr3->SetLineWidth(3);
   gr3->SetPoint(0,1.64,0.0347300);
   gr3->SetPoint(1,2.92,0.0348123);
   gr3->SetPoint(2,4.21,0.0357447);
   gr3->SetPoint(3,5.5 ,0.0382404);
   gr3->SetPoint(4,6.78,0.0386449);
   gr3->SetPoint(5,8.07,0.0367561);
   gr3->SetPoint(6,9.35,0.0429749);
   gr3->Draw("c");
   
   leg = new TLegend(0.22,0.67,0.67,0.90);
   leg->AddEntry(gr4,"HERMES data (Xe)","p");
   leg->AddEntry(gr0,"No P_{T}","l");
   leg->AddEntry(gr1,"Constant","l");
   leg->AddEntry(gr2,"BDMPS mean","l");
   leg->AddEntry(gr3,"Event by event MC","l");
   leg->Draw();
  
}
