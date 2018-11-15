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
   gStyle->SetHistLineWidth(2.);
   gStyle->SetLineWidth(2.);

   TCanvas *c1  = new TCanvas("c1 ", "c1 ",67,1133,500,500);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetLeftMargin(0.17);
   
   TH2F *cnu_r = new TH2F("cnu_r","Comparison PyQM with HERMES",20,1.9,27.,50,0.45,0.85);
   cnu_r->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   cnu_r->SetLineColor(ci);
   cnu_r->GetXaxis()->SetTitle("#nu (GeV)");
   cnu_r->GetXaxis()->CenterTitle(true);
   cnu_r->GetYaxis()->SetTitle("R^{#pi^{+}}_{A}");
   cnu_r->GetYaxis()->CenterTitle(true);
   cnu_r->GetXaxis()->SetLabelSize(0.044);
   cnu_r->GetXaxis()->SetTitleSize(0.058);
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
   gr4->SetPoint(0,  5.2548, 0.5913); gr4->SetPointError(0, 0, 0.0434);
   gr4->SetPoint(1,  7.1235, 0.6011); gr4->SetPointError(1, 0, 0.0229);
   gr4->SetPoint(2,  9.0671, 0.6112); gr4->SetPointError(2, 0, 0.0224);
   gr4->SetPoint(3, 11.0140, 0.6505); gr4->SetPointError(3, 0, 0.0236);
   gr4->SetPoint(4, 13.0002, 0.6781); gr4->SetPointError(4, 0, 0.0245);
   gr4->SetPoint(5, 14.9798, 0.6913); gr4->SetPointError(5, 0, 0.0253);
   gr4->SetPoint(6, 16.9450, 0.7232); gr4->SetPointError(6, 0, 0.0270);
   gr4->SetPoint(7, 18.9383, 0.7551); gr4->SetPointError(7, 0, 0.0294);
   gr4->SetPoint(8, 21.3881, 0.7865); gr4->SetPointError(8, 0, 0.0321);
   gr4->Draw("p");

   TGraphErrors *gr0 = new TGraphErrors(8);
   gr0->SetName("Graph");
   gr0->SetTitle("Graph");
   gr0->SetFillColor(1);
   gr0->SetLineColor(6);
   gr0->SetLineStyle(4);
   gr0->SetLineWidth(3);
   gr0->SetPoint(0,5.218,0.6564);
   gr0->SetPoint(1,7.656,0.6699);
   gr0->SetPoint(2,10.09,0.6768);
   gr0->SetPoint(3,12.53,0.6917);
   gr0->SetPoint(4,14.96,0.7077);
   gr0->SetPoint(5,17.40,0.7245);
   gr0->SetPoint(6,19.84,0.7428);
   gr0->SetPoint(7,22.28,0.7564);
   gr0->Draw("c");
   
   TGraphErrors *gr1 = new TGraphErrors(8);
   gr1->SetName("Graph");
   gr1->SetTitle("Graph");
   gr1->SetFillColor(1);
   gr1->SetLineColor(4);
   gr1->SetLineStyle(2);
   gr1->SetLineWidth(3);
   gr1->SetPoint(0,5.218,0.6572278);
   gr1->SetPoint(1,7.656,0.6691795);
   gr1->SetPoint(2,10.09,0.6748639);
   gr1->SetPoint(3,12.53,0.6848846);
   gr1->SetPoint(4,14.96,0.6955216);
   gr1->SetPoint(5,17.40,0.7066184);
   gr1->SetPoint(6,19.84,0.7189181);
   gr1->SetPoint(7,22.28,0.7276917);
   gr1->Draw("c");
   
   TGraphErrors *gr2 = new TGraphErrors(8);
   gr2->SetName("Graph");
   gr2->SetTitle("Graph");
   gr2->SetFillColor(1);
   gr2->SetLineColor(3);
   gr2->SetLineStyle(1);
   gr2->SetLineWidth(3);
   gr2->SetPoint(0,5.218,0.6639802);
   gr2->SetPoint(1,7.656,0.6685258);
   gr2->SetPoint(2,10.09,0.6654739);
   gr2->SetPoint(3,12.53,0.6663391);
   gr2->SetPoint(4,14.96,0.6672006);
   gr2->SetPoint(5,17.40,0.6694891);
   gr2->SetPoint(6,19.84,0.6692473);
   gr2->SetPoint(7,22.28,0.6751976);
   gr2->Draw("c");
   
   TGraphErrors *gr3 = new TGraphErrors(8);
   gr3->SetName("Graph");
   gr3->SetTitle("Graph");
   gr3->SetFillColor(1);
   gr3->SetLineColor(2);
   gr3->SetLineStyle(8);
   gr3->SetLineWidth(3);
   gr3->SetPoint(0,5.218,0.668394);
   gr3->SetPoint(1,7.656,0.675594);
   gr3->SetPoint(2,10.09,0.680554);
   gr3->SetPoint(3,12.53,0.683540);
   gr3->SetPoint(4,14.96,0.686952);
   gr3->SetPoint(5,17.40,0.693278);
   gr3->SetPoint(6,19.84,0.699563);
   gr3->SetPoint(7,22.28,0.704590);
   gr3->Draw("c");

   leg = new TLegend(0.45,0.40,0.90,0.17);
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
