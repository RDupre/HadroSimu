{
//=========Macro generated from canvas: c2 /c2 
//=========  (Tue Jun 26 11:07:49 2012) by ROOT version5.32/00
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
   
   TH2F *czz_r = new TH2F("czz_r","Comparison PyQM with HERMES",20,0.0,.5,50,0.5,1.0);
   czz_r->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   czz_r->SetLineColor(ci);
   czz_r->GetXaxis()->SetTitle("#hat{q} (GeV^{2}/fm)");
   czz_r->GetXaxis()->CenterTitle(true);
   czz_r->GetXaxis()->SetLabelSize(0.044);
   czz_r->GetXaxis()->SetTitleSize(0.058);
   czz_r->GetXaxis()->SetTitleFont(2);
   czz_r->GetXaxis()->SetTitleOffset(0.9);
   czz_r->GetYaxis()->SetTitle("R^{#pi^{+}}_{Xe}(z = 0.5)");
   czz_r->GetYaxis()->CenterTitle(true);
   czz_r->GetYaxis()->SetLabelSize(0.044);
   czz_r->GetYaxis()->SetTitleSize(0.058);
   czz_r->GetYaxis()->SetTitleFont(2);
   czz_r->GetYaxis()->SetTitleOffset(1.35);
   czz_r->Draw("");
   
   TGraphErrors *gr1 = new TGraphErrors(6);
   gr1->SetName("Graph");
   gr1->SetTitle("Graph");
   gr1->SetFillColor(1);
   gr1->SetLineColor(1);
   gr1->SetLineStyle(1);
   gr1->SetLineWidth(3);
   gr1->SetPoint(0,0.0,1.);
   gr1->SetPoint(1,0.1,0.858);
   gr1->SetPoint(2,0.2,0.77);
   gr1->SetPoint(3,0.3,0.71);
   gr1->SetPoint(4,0.4,0.66);
   gr1->SetPoint(5,0.5,0.622);
   gr1->Draw("c");
   
   TGraphErrors *gr2 = new TGraphErrors(2);
   gr2->SetName("Graph");
   gr2->SetTitle("Graph");
   gr2->SetFillColor(1);
   gr2->SetLineColor(2);
   gr2->SetLineStyle(2);
   gr2->SetLineWidth(3);
   gr2->SetPoint(0,0.0,0.68);
   gr2->SetPoint(1,0.5,0.68);
   gr2->Draw("c");

   leg = new TLegend(0.45,0.75,0.90,0.90);
   leg->AddEntry(gr1,"PyQM Simulation","l");
   leg->AddEntry(gr2,"HERMES data","l");
   leg->Draw();

   TPaveText *pt = new TPaveText(0.15,0.9369355,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Comparison PyQM with HERMES");
   pt->Draw();
   c2->Modified();
   c2 ->cd();
   c2 ->SetSelected(c2 );
}
