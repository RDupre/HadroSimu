{
//=========Macro generated from canvas: c3 /c3 
//=========  (Wed Jul  4 14:13:06 2012) by ROOT version5.32/00
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

   TCanvas *c3  = new TCanvas("c3 ", "c3 ",701,1133,500,500);
   c3->Range(0.625,0.3125,4.375,1.1875);
   c3->SetFillColor(0);
   c3->SetBorderMode(0);
   c3->SetBorderSize(2);
   c3->SetFrameBorderMode(0);
   c3->SetFrameBorderMode(0);
   c3->SetLeftMargin(0.17);
   
   TH2F *cq2_r = new TH2F("cq2_r","Comparison PyQM with HERMES",20,1,4,50,0.9,1.10);
   cq2_r->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   cq2_r->SetLineColor(ci);
   cq2_r->GetXaxis()->SetTitle("Q^{2} (GeV^{2})");
   cq2_r->GetXaxis()->CenterTitle(true);
   cq2_r->GetXaxis()->SetLabelSize(0.044);
   cq2_r->GetXaxis()->SetTitleSize(0.058);
   cq2_r->GetXaxis()->SetTitleFont(2);
   cq2_r->GetXaxis()->SetTitleOffset(0.92);
   cq2_r->GetYaxis()->SetTitle("R^{#pi^{+}}_{A}");
   cq2_r->GetYaxis()->CenterTitle(true);
   cq2_r->GetYaxis()->SetLabelSize(0.044);
   cq2_r->GetYaxis()->SetTitleSize(0.058);
   cq2_r->GetYaxis()->SetTitleFont(2);
   cq2_r->GetYaxis()->SetTitleOffset(1.3);
   cq2_r->Draw("");
   
   TGraphErrors *gr1 = new TGraphErrors(5);
   gr1->SetName("Graph");
   gr1->SetTitle("Graph");
   gr1->SetFillColor(1);
   gr1->SetLineColor(2);
   gr1->SetLineStyle(1);
   gr1->SetLineWidth(3);
   gr1->SetPoint(0,1.214286,0.9550405);
   gr1->SetPoint(1,1.856857,0.9816088);
   gr1->SetPoint(2,2.714   ,1.01851);
   gr1->SetPoint(3,3.357143,1.037017);
   gr1->SetPoint(4,3.785714,1.051244);
   
   gr1->Draw("c");
   
   TGraphErrors *gr2 = new TGraphErrors(6);
   gr2->SetName("Graph");
   gr2->SetTitle("Graph");
   gr2->SetFillColor(1);
   gr2->SetLineColor(3);
   gr2->SetLineStyle(2);
   gr2->SetLineWidth(3);
   gr2->SetPoint(0,1.214286,0.9912394);
   gr2->SetPoint(1,1.642857,0.9954163);
   gr2->SetPoint(2,2.5,1.000341);
   gr2->SetPoint(3,2.928571,1.005764);
   gr2->SetPoint(4,3.357143,1.011296);
   gr2->SetPoint(5,3.785714,1.017291);
   
   gr2->Draw("c");
   
   TGraphErrors *gr3 = new TGraphErrors(7);
   gr3->SetName("Graph");
   gr3->SetTitle("Graph");
   gr3->SetFillColor(1);
   gr3->SetLineColor(4);
   gr3->SetLineStyle(4);
   gr3->SetLineWidth(3);
   gr3->SetPoint(0,1.5,0.99417);
   gr3->SetPoint(1,2.5,0.9991068);
   gr3->SetPoint(2,3.5,0.9982039);
   gr3->SetPoint(3,4.5,0.9983608);
   gr3->SetPoint(4,5.5,0.994857);
   gr3->SetPoint(5,6.5,0.9955966);
   gr3->SetPoint(6,7.5,0.9933946);
   
   gr3->Draw("c");
   
   leg = new TLegend(0.22,0.71,0.67,0.90);
   leg->AddEntry(gr1,"CLAS Fe/D","l");
   leg->AddEntry(gr2,"CLAS Pb/C","l");
   leg->AddEntry(gr3,"HERMES Xe/D","l");
   leg->Draw();

   c3->Modified();
   c3 ->cd();
   c3 ->SetSelected(c3 );
}
