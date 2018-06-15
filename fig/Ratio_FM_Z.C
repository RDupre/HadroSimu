{
//=========Macro generated from canvas: c2 /c2 
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

   TCanvas *c2  = new TCanvas("c2 ", "c2 ",351,1133,500,500);
   c2->Range(-0.125,0.3125,1.125,1.1875);
   c2->SetFillColor(0);
   c2->SetBorderMode(0);
   c2->SetBorderSize(2);
   c2->SetFrameBorderMode(0);
   c2->SetFrameBorderMode(0);
   c2->SetLeftMargin(0.17);
   
   TH2F *czz_r = new TH2F("czz_r","Comparison PyQM with HERMES",20,0.1,1,50,0.92,1.1);
   czz_r->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   czz_r->SetLineColor(ci);
   czz_r->GetXaxis()->SetTitle("z");
   czz_r->GetXaxis()->CenterTitle(true);
   czz_r->GetXaxis()->SetLabelSize(0.044);
   czz_r->GetXaxis()->SetTitleSize(0.058);
   czz_r->GetXaxis()->SetTitleFont(2);
   czz_r->GetXaxis()->SetTitleOffset(0.9);
   czz_r->GetYaxis()->SetTitle("R^{#pi^{+}}_{A}");
   czz_r->GetYaxis()->CenterTitle(true);
   czz_r->GetYaxis()->SetLabelSize(0.044);
   czz_r->GetYaxis()->SetTitleSize(0.058);
   czz_r->GetYaxis()->SetTitleFont(2);
   czz_r->GetYaxis()->SetTitleOffset(1.35);
   czz_r->Draw("");
   
   TGraphErrors *gr1 = new TGraphErrors(8);
   gr1->SetName("Graph");
   gr1->SetTitle("Graph");
   gr1->SetFillColor(1);
   gr1->SetLineColor(2);
   gr1->SetLineStyle(1);
   gr1->SetLineWidth(3);
   gr1->SetPoint(0,0.0625,1.04381);
   gr1->SetPoint(1,0.1875,1.013996);
   gr1->SetPoint(2,0.3125,1.008363);
   gr1->SetPoint(3,0.4375,1.014423);
   gr1->SetPoint(4,0.5625,1.014487);
   gr1->SetPoint(5,0.6875,0.9995713);
   gr1->SetPoint(6,0.8125,0.980241);
   gr1->SetPoint(7,0.9375,0.93608);
   
   gr1->Draw("c");
   
   TGraphErrors *gr2 = new TGraphErrors(8);
   gr2->SetName("Graph");
   gr2->SetTitle("Graph");
   gr2->SetFillColor(1);
   gr2->SetLineColor(3);
   gr2->SetLineStyle(2);
   gr2->SetLineWidth(3);
   gr2->SetPoint(0,0.0625,1.004514);
   gr2->SetPoint(1,0.1875,1.002721);
   gr2->SetPoint(2,0.3125,1.002275);
   gr2->SetPoint(3,0.4375,1.003363);
   gr2->SetPoint(4,0.5625,1.004009);
   gr2->SetPoint(5,0.6875,1.000087);
   gr2->SetPoint(6,0.8125,0.9976693);
   gr2->SetPoint(7,0.9375,0.9941906);

   gr2->Draw("c");
   
   TGraphErrors *gr3 = new TGraphErrors(8);
   gr3->SetName("Graph");
   gr3->SetTitle("Graph");
   gr3->SetFillColor(1);
   gr3->SetLineColor(4);
   gr3->SetLineStyle(4);
   gr3->SetLineWidth(3);
   gr3->SetPoint(0,0.0625,0.9969182);
   gr3->SetPoint(1,0.1875,1.000135);
   gr3->SetPoint(2,0.3125,0.9982466);
   gr3->SetPoint(3,0.4375,0.9984816);
   gr3->SetPoint(4,0.5625,0.9986284);
   gr3->SetPoint(5,0.6875,0.9975575);
   gr3->SetPoint(6,0.8125,1.00363);
   gr3->SetPoint(7,0.9375,1.005514);
   
   gr3->Draw("c");
   
   leg = new TLegend(0.22,0.71,0.67,0.90);
   leg->AddEntry(gr1,"CLAS Fe/D","l");
   leg->AddEntry(gr2,"CLAS Fe/C","l");
   leg->AddEntry(gr3,"HERMES Xe/D","l");
   leg->Draw();

   c2->Modified();
   c2 ->cd();
   c2 ->SetSelected(c2 );
}
