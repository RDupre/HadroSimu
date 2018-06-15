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

   TCanvas *c7  = new TCanvas("c7 ", "c7 ",701,1447,500,500);
   c7->Range(-0.125,-0.08125,1.125,0.23125);
   c7->SetFillColor(0);
   c7->SetBorderMode(0);
   c7->SetBorderSize(2);
   c7->SetFrameBorderMode(0);
   c7->SetFrameBorderMode(0);
   c7->SetLeftMargin(0.17);

   TH2F *czz_p = new TH2F("czz_p","",20,0,1,5,-0.005,0.03);
   czz_p->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   czz_p->SetLineColor(ci);
   czz_p->GetXaxis()->SetTitle("z");
   czz_p->GetXaxis()->CenterTitle(true);
   czz_p->GetXaxis()->SetLabelSize(0.044);
   czz_p->GetXaxis()->SetTitleSize(0.058);
   czz_p->GetXaxis()->SetTitleFont(2);
   czz_p->GetXaxis()->SetTitleOffset(0.9);
   czz_p->GetYaxis()->SetTitle("#DeltaP_{T}^{2} (GeV^{2})");
   czz_p->GetYaxis()->CenterTitle(true);
   czz_p->GetYaxis()->SetLabelSize(0.044);
   czz_p->GetYaxis()->SetTitleSize(0.058);
   czz_p->GetYaxis()->SetTitleFont(2);
   czz_p->GetYaxis()->SetTitleOffset(1.45);
   czz_p->Draw("");
   
   TGraphErrors *gr1 = new TGraphErrors(7);
   gr1->SetName("Graph");
   gr1->SetTitle("Graph");
   gr1->SetFillColor(1);
   gr1->SetLineColor(2);
   gr1->SetLineStyle(1);
   gr1->SetLineWidth(3);
   gr1->SetPoint(0,0.0625,2.970081e-05);
   gr1->SetPoint(1,0.1875,0.0002746433);
   gr1->SetPoint(2,0.3125,0.001135953);
   gr1->SetPoint(3,0.5   ,0.003447083);
   gr1->SetPoint(4,0.6875,0.007031381);
   gr1->SetPoint(5,0.8125,0.009419754);
   gr1->SetPoint(6,0.9375,0.01603316);
   
   gr1->Draw("c");
   
   TGraphErrors *gr2 = new TGraphErrors(8);
   gr2->SetName("Graph");
   gr2->SetTitle("Graph");
   gr2->SetFillColor(1);
   gr2->SetLineColor(3);
   gr2->SetLineStyle(2);
   gr2->SetLineWidth(3);
   gr2->SetPoint(0,0.0625,-5.587935e-06);
   gr2->SetPoint(1,0.1875,1.306832e-05);
   gr2->SetPoint(2,0.3125,0.0001502484);
   gr2->SetPoint(3,0.4375,0.0007555783);
   gr2->SetPoint(4,0.5625,0.001191095);
   gr2->SetPoint(5,0.6875,0.001931429);
   gr2->SetPoint(6,0.8125,0.003519401);
   gr2->SetPoint(7,0.9375,0.005979404);
   
   gr2->Draw("c");
   
   TGraphErrors *gr3 = new TGraphErrors(6);
   gr3->SetName("Graph");
   gr3->SetTitle("Graph");
   gr3->SetFillColor(1);
   gr3->SetLineColor(4);
   gr3->SetLineStyle(4);
   gr3->SetLineWidth(3);
   gr3->SetPoint(0,0.0625,-2.293289e-05);
   gr3->SetPoint(1,0.1875,0.0001935959);
   gr3->SetPoint(2,0.3125,0.0008021295);
   gr3->SetPoint(3,0.5   ,0.001078446);
   gr3->SetPoint(4,0.6875,0.002599061);
   gr3->SetPoint(5,0.9375,0.01542243);
   
   gr3->Draw("c");
   

   leg = new TLegend(0.22,0.71,0.67,0.90);
   leg->AddEntry(gr1,"CLAS Fe/D","l");
   leg->AddEntry(gr2,"CLAS Pb/C","l");
   leg->AddEntry(gr3,"HERMES Xe/D","l");
   leg->Draw();

   TPaveText *pt = new TPaveText(0.15,0.9369355,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Comparison PyQM with HERMES");
   pt->Draw();
   c7->Modified();
   c7 ->cd();
   c7 ->SetSelected(c7 );
}
