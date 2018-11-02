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

   TCanvas *c5  = new TCanvas("c5 ", "c5 ",67,1447,500,500);
   c5->Range(0,0,1,1);
   c5->SetFillColor(0);
   c5->SetBorderMode(0);
   c5->SetBorderSize(2);
   c5->SetFrameBorderMode(0);
   c5->SetFrameBorderMode(0);
   c5->SetLeftMargin(0.17);
   
   TH2F *cpt_r = new TH2F("cpt_r","Comparison PyQM with HERMES",20,0,1.5,50,0.9,3);
   cpt_r->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   cpt_r->SetLineColor(ci);
   cpt_r->GetXaxis()->SetTitle("p_{T}^{2} (GeV^{2})");
   cpt_r->GetXaxis()->CenterTitle(true);
   cpt_r->GetXaxis()->SetLabelSize(0.044);
   cpt_r->GetXaxis()->SetTitleSize(0.054);
   cpt_r->GetXaxis()->SetTitleFont(2);
   cpt_r->GetXaxis()->SetTitleOffset(.93);
   cpt_r->GetYaxis()->SetTitle("R^{#pi^{+}}_{A}");
   cpt_r->GetYaxis()->CenterTitle(true);
   cpt_r->GetYaxis()->SetLabelSize(0.044);
   cpt_r->GetYaxis()->SetTitleSize(0.058);
   cpt_r->GetYaxis()->SetTitleFont(2);
   cpt_r->GetYaxis()->SetTitleOffset(1.1);
   cpt_r->Draw("");
   
   TGraphErrors *gr1 = new TGraphErrors(6);
   gr1->SetName("Graph");
   gr1->SetTitle("Graph");
   gr1->SetFillColor(1);
   gr1->SetLineColor(2);
   gr1->SetLineStyle(1);
   gr1->SetLineWidth(3);
   gr1->SetPoint(0,0.125,0.9998132);
   gr1->SetPoint(1,0.375,1.016403);
   gr1->SetPoint(2,0.625,1.018157);
   gr1->SetPoint(3,0.875,1.237627);
   gr1->SetPoint(4,1.125,1.685368);
   gr1->SetPoint(5,1.375,2.738621);
   
   gr1->Draw("c");
   
   TGraphErrors *gr2 = new TGraphErrors(6);
   gr2->SetName("Graph");
   gr2->SetTitle("Graph");
   gr2->SetFillColor(1);
   gr2->SetLineColor(3);
   gr2->SetLineStyle(2);
   gr2->SetLineWidth(3);
   gr2->SetPoint(0,0.125,0.9995521);
   gr2->SetPoint(1,0.375,1.00559);
   gr2->SetPoint(2,0.625,1.004338);
   gr2->SetPoint(3,0.875,1.051891);
   gr2->SetPoint(4,1.125,1.123096);
   gr2->SetPoint(5,1.375,1.183732);
   
   gr2->Draw("c");
   
   TGraphErrors *gr3 = new TGraphErrors(6);
   gr3->SetName("Graph");
   gr3->SetTitle("Graph");
   gr3->SetFillColor(1);
   gr3->SetLineColor(4);
   gr3->SetLineStyle(4);
   gr3->SetLineWidth(3);
   gr3->SetPoint(0,0.15625,0.9984221);
   gr3->SetPoint(1,0.46875,0.9969096);
   gr3->SetPoint(2,0.78125,0.9996103);
   gr3->SetPoint(3,1.09375,1.001319);
   gr3->SetPoint(4,1.40625,1.006571);
   gr3->SetPoint(5,1.71875,1.003091);
   gr3->SetPoint(6,2.03125,1.016959);
   gr3->SetPoint(7,2.34375,1.026517);

   gr3->Draw("c");
   
   leg = new TLegend(0.22,0.71,0.65,0.90);
   leg->AddEntry(gr1,"CLAS Fe/D","l");
   leg->AddEntry(gr2,"CLAS Pb/C","l");
   leg->AddEntry(gr3,"HERMES Xe/D","l");
   leg->Draw();

   c5->Modified();
   c5 ->cd();
   c5 ->SetSelected(c5 );
}
