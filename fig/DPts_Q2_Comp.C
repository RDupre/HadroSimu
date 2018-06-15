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
   
   TH2F *cq2_p = new TH2F("cq2_p","#DeltaP_{T}^{2} % Q^{2}",25,1,10,5,-0.02,0.10);
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
   gr4->SetPoint(0,1.65,0.0195); gr4->SetPointError(0,0,0.0000);
   gr4->SetPoint(1,2.75,0.0247); gr4->SetPointError(1,0,0.0050);
   gr4->SetPoint(2,4.40,0.0325); gr4->SetPointError(2,0,0.0051);
   gr4->SetPoint(3,7.00,0.03  ); gr4->SetPointError(3,0,0.0088);
   gr4->Draw("p");

   TGraphErrors *gr0 = new TGraphErrors(7);
   gr0->SetName("Graph");
   gr0->SetTitle("Graph");
   gr0->SetFillColor(1);
   gr0->SetLineColor(6);
   gr0->SetLineStyle(4);
   gr0->SetLineWidth(3);
   gr0->SetPoint(0,1.5,-0.009312123);
   gr0->SetPoint(1,2.5,-0.009502351);
   gr0->SetPoint(2,3.5,-0.01022333);
   gr0->SetPoint(3,4.5,-0.009217352);
   gr0->SetPoint(4,5.5,-0.01020306);
   gr0->SetPoint(5,6.5,-0.006372333);
   gr0->SetPoint(6,7.5,-0.006408304);
   gr0->Draw("c");
   
   TGraphErrors *gr1 = new TGraphErrors(7);
   gr1->SetName("Graph");
   gr1->SetTitle("Graph");
   gr1->SetFillColor(1);
   gr1->SetLineColor(4);
   gr1->SetLineStyle(2);
   gr1->SetLineWidth(3);
   gr1->SetPoint(0,1.5,0.02781597);
   gr1->SetPoint(1,2.5,0.02705804);
   gr1->SetPoint(2,3.5,0.02642381);
   gr1->SetPoint(3,4.5,0.02778473);
   gr1->SetPoint(4,5.5,0.02763641);
   gr1->SetPoint(5,6.5,0.03073215);
   gr1->SetPoint(6,7.5,0.02955478);
   gr1->Draw("c");
   
   TGraphErrors *gr2 = new TGraphErrors(7);
   gr2->SetName("Graph");
   gr2->SetTitle("Graph");
   gr2->SetFillColor(1);
   gr2->SetLineColor(3);
   gr2->SetLineStyle(1);
   gr2->SetLineWidth(3);
   gr2->SetPoint(0,1.5,0.05167317);
   gr2->SetPoint(1,2.5,0.05066368);
   gr2->SetPoint(2,3.5,0.04784024);
   gr2->SetPoint(3,4.5,0.05045101);
   gr2->SetPoint(4,5.5,0.04884648);
   gr2->SetPoint(5,6.5,0.05060044);
   gr2->SetPoint(6,7.5,0.05037647);
   gr2->Draw("c");
   
   TGraphErrors *gr3 = new TGraphErrors(7);
   gr3->SetName("Graph");
   gr3->SetTitle("Graph");
   gr3->SetFillColor(1);
   gr3->SetLineColor(2);
   gr3->SetLineStyle(8);
   gr3->SetLineWidth(3);
   gr3->SetPoint(0,1.5,0.02584568);
   gr3->SetPoint(1,2.5,0.02498206);
   gr3->SetPoint(2,3.5,0.02429259);
   gr3->SetPoint(3,4.5,0.02555761);
   gr3->SetPoint(4,5.5,0.02565283);
   gr3->SetPoint(5,6.5,0.02756089);
   gr3->SetPoint(6,7.5,0.02765819);
   gr3->Draw("c");
   
   leg = new TLegend(0.22,0.67,0.67,0.90);
   leg->AddEntry(gr4,"HERMES data (Xe)","p");
   leg->AddEntry(gr0,"No P_{T}","l");
   leg->AddEntry(gr1,"Constant","l");
   leg->AddEntry(gr2,"BDMPS mean","l");
   leg->AddEntry(gr3,"Event by event MC","l");
   leg->Draw();
  
}
