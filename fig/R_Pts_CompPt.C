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

   TCanvas *c1  = new TCanvas("c1 ", "c1 ",67,1133,500,500);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetLeftMargin(0.17);
   c1->SetLogx(1);
   
   TH2F *cnu_r = new TH2F("cnu_r","Comparison PyQM with HERMES",20,0.0,3.0,50,0.5,1.3);
   cnu_r->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   cnu_r->SetLineColor(ci);
   cnu_r->GetXaxis()->SetTitle("p_{T}^{2} (GeV^{2})");
   cnu_r->GetXaxis()->CenterTitle(true);
   cnu_r->GetYaxis()->SetTitle("R^{#pi^{+}}_{A}");
   cnu_r->GetYaxis()->CenterTitle(true);
   cnu_r->GetXaxis()->SetLabelSize(0.044);
   cnu_r->GetXaxis()->SetTitleSize(0.054);
   cnu_r->GetXaxis()->SetTitleOffset(0.95);
   cnu_r->GetXaxis()->SetTitleFont(2);
   cnu_r->GetYaxis()->SetLabelSize(0.044);
   cnu_r->GetYaxis()->SetTitleSize(0.058);
   cnu_r->GetYaxis()->SetTitleFont(2);
   cnu_r->GetYaxis()->SetTitleOffset(1.35);
   cnu_r->Draw("");
   
   TGraphErrors *gr4 = new TGraphErrors(9);
   gr4->SetName("Graph");
   gr4->SetTitle("Graph");
   gr4->SetFillColor(1);
   gr4->SetLineWidth(2);
   gr4->SetMarkerStyle(8);
   gr4->SetPoint(0, 0.0241, 0.6394); gr4->SetPointError(0, 0, 0.0222);
   gr4->SetPoint(1, 0.0744, 0.6462); gr4->SetPointError(1, 0, 0.0227);
   gr4->SetPoint(2, 0.1843, 0.6796); gr4->SetPointError(2, 0, 0.0232);
   gr4->SetPoint(3, 0.3888, 0.6711); gr4->SetPointError(3, 0, 0.0236);
   gr4->SetPoint(4, 0.5892, 0.6928); gr4->SetPointError(4, 0, 0.0255);
   gr4->SetPoint(5, 0.7906, 0.7520); gr4->SetPointError(5, 0, 0.0297);
   gr4->SetPoint(6, 0.9895, 0.8285); gr4->SetPointError(6, 0, 0.0362);
   gr4->SetPoint(7, 1.2313, 0.9456); gr4->SetPointError(7, 0, 0.0439);
   gr4->SetPoint(8, 1.8261, 1.1169); gr4->SetPointError(8, 0, 0.0551);
   gr4->Draw("p");

   TGraphErrors *gr0 = new TGraphErrors(6);
   gr0->SetName("Graph");
   gr0->SetTitle("Graph");
   gr0->SetFillColor(1);
   gr0->SetLineColor(6);
   gr0->SetLineStyle(4);
   gr0->SetLineWidth(3);
   gr0->SetPoint(0,0.333333,0.7286114);
   gr0->SetPoint(1,1.000000,0.7040852);
   gr0->SetPoint(2,1.666667,0.6926358);
   gr0->SetPoint(3,2.333333,0.6904606);
   gr0->SetPoint(4,3.000000,0.6874251);
   gr0->SetPoint(5,3.666667,0.6729701);
   gr0->Draw("c");
   
   TGraphErrors *gr1 = new TGraphErrors(6);
   gr1->SetName("Graph");
   gr1->SetTitle("Graph");
   gr1->SetFillColor(1);
   gr1->SetLineColor(4);
   gr1->SetLineStyle(2);
   gr1->SetLineWidth(3);
   gr1->SetPoint(0,0.333333,0.6940984);
   gr1->SetPoint(1,1.000000,0.7885526);
   gr1->SetPoint(2,1.666667,0.8449105);
   gr1->SetPoint(3,2.333333,0.8875243);
   gr1->SetPoint(4,3.000000,0.9349246);
   gr1->SetPoint(5,3.666667,0.9675855);
   gr1->Draw("c");
   
   TGraphErrors *gr2 = new TGraphErrors(6);
   gr2->SetName("Graph");
   gr2->SetTitle("Graph");
   gr2->SetFillColor(1);
   gr2->SetLineColor(3);
   gr2->SetLineStyle(1);
   gr2->SetLineWidth(3);
   gr2->SetPoint(0,0.333333,0.657453);
   gr2->SetPoint(1,1.000000,0.780134);
   gr2->SetPoint(2,1.666667,0.941078);
   gr2->SetPoint(3,2.333333,1.140072);
   gr2->SetPoint(4,3.000000,1.417724);
   gr2->SetPoint(5,3.666667,1.753137);
   gr2->Draw("c");
   
   TGraphErrors *gr3 = new TGraphErrors(6);
   gr3->SetName("Graph");
   gr3->SetTitle("Graph");
   gr3->SetFillColor(1);
   gr3->SetLineColor(2);
   gr3->SetLineStyle(8);
   gr3->SetLineWidth(3);
   gr3->SetPoint(0,0.333333,0.68556);
   gr3->SetPoint(1,1.000000,0.75613);
   gr3->SetPoint(2,1.666667,0.82861);
   gr3->SetPoint(3,2.333333,0.90782);
   gr3->SetPoint(4,3.000000,1.01428);
   gr3->SetPoint(5,3.666667,1.14142);
   gr3->Draw("c");
   
   leg = new TLegend(0.22,0.67,0.67,0.90);
   leg->AddEntry(gr4,"HERMES data (Xe)","p");
   leg->AddEntry(gr0,"No P_{T}","l");
   leg->AddEntry(gr1,"Constant","l");
   leg->AddEntry(gr2,"BDMPS mean","l");
   leg->AddEntry(gr3,"Event by event MC","l");
   leg->Draw();

   c1->Modified();
   c1 ->cd();
   c1 ->SetSelected(c1 );
}
