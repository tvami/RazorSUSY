//HT and MET distributions
h3_HT_MET_TrigEff_HLT_AK8PFJet450->ProjectionX("h3_HT_MET_TrigEff_HLT_AK8PFJet450_px",0,-1,2,2)->Draw()
c1->SaveAs("h3_HT_MET_TrigEff_HLT_AK8PFJet450_px.png")
h3_HT_MET_TrigEff_HLT_AK8PFJet450->ProjectionY("h3_HT_MET_TrigEff_HLT_AK8PFJet450_py",0,-1,2,2)->Draw()
c1->SaveAs("h3_HT_MET_TrigEff_HLT_AK8PFJet450_py.png")

h3_HT_MET_TrigEff_HLT_AK8PFJet400_TrimMass30->ProjectionX("h3_HT_MET_TrigEff_HLT_AK8PFJet400_TrimMass30_px",0,-1,2,2)->Draw()
c1->SaveAs("h3_HT_MET_TrigEff_HLT_AK8PFJet400_TrimMass30_px.png")
h3_HT_MET_TrigEff_HLT_AK8PFJet400_TrimMass30->ProjectionY("h3_HT_MET_TrigEff_HLT_AK8PFJet400_TrimMass30_py",0,-1,2,2)->Draw()
c1->SaveAs("h3_HT_MET_TrigEff_HLT_AK8PFJet400_TrimMass30_py.png")

h3_HT_MET_TrigEff_HLT_AK8PFHT800_TrimMass50->ProjectionX("h3_HT_MET_TrigEff_HLT_AK8PFHT800_TrimMass50_px",0,-1,2,2)->Draw()
c1->SaveAs("h3_HT_MET_TrigEff_HLT_AK8PFHT800_TrimMass50_px.png")
h3_HT_MET_TrigEff_HLT_AK8PFHT800_TrimMass50->ProjectionY("h3_HT_MET_TrigEff_HLT_AK8PFHT800_TrimMass50_py",0,-1,2,2)->Draw()
c1->SaveAs("h3_HT_MET_TrigEff_HLT_AK8PFHT800_TrimMass50_py.png")

h3_HT_MET_TrigEff_HLT_PFHT1050->ProjectionX("h3_HT_MET_TrigEff_HLT_PFHT1050_px",0,-1,2,2)->Draw()
c1->SaveAs("h3_HT_MET_TrigEff_HLT_PFHT1050_px.png")
h3_HT_MET_TrigEff_HLT_PFHT1050->ProjectionY("h3_HT_MET_TrigEff_HLT_PFHT1050_py",0,-1,2,2)->Draw()
c1->SaveAs("h3_HT_MET_TrigEff_HLT_PFHT1050_py.png")

h3_HT_MET_TrigEff_HLT_PFHT500_PFMET100_PFMHT100_IDTight->ProjectionX("h3_HT_MET_TrigEff_HLT_PFHT500_PFMET100_PFMHT100_IDTight_px",0,-1,2,2)->Draw()
c1->SaveAs("h3_HT_MET_TrigEff_HLT_PFHT500_PFMET100_PFMHT100_IDTight_px.png")
h3_HT_MET_TrigEff_HLT_PFHT500_PFMET100_PFMHT100_IDTight->ProjectionY("h3_HT_MET_TrigEff_HLT_PFHT500_PFMET100_PFMHT100_IDTight_py",0,-1,2,2)->Draw()
c1->SaveAs("h3_HT_MET_TrigEff_HLT_PFHT500_PFMET100_PFMHT100_IDTight_py.png")

//HT efficiency
h2_HT_TrigEff_HLT_AK8PFJet450->ProfileX()->Draw("COLZ")
h2_HT_TrigEff_HLT_AK8PFJet450_pfx->GetYaxis()->SetTitle("Trigger efficiency")
c1->SaveAs("h2_HT_TrigEff_HLT_AK8PFJet450_pfx.png")

h2_HT_TrigEff_HLT_AK8PFJet400_TrimMass30->ProfileX()->Draw("COLZ")
h2_HT_TrigEff_HLT_AK8PFJet400_TrimMass30_pfx->GetYaxis()->SetTitle("Trigger efficiency")
c1->SaveAs("h2_HT_TrigEff_HLT_AK8PFJet400_TrimMass30_pfx.png")

h2_HT_TrigEff_HLT_AK8PFHT800_TrimMass50->ProfileX()->Draw("COLZ")
h2_HT_TrigEff_HLT_AK8PFHT800_TrimMass50_pfx->GetYaxis()->SetTitle("Trigger efficiency")
c1->SaveAs("h2_HT_TrigEff_HLT_AK8PFHT800_TrimMass50_pfx.png")

h2_HT_TrigEff_HLT_PFHT1050->ProfileX()->Draw("COLZ")
h2_HT_TrigEff_HLT_PFHT1050_pfx->GetYaxis()->SetTitle("Trigger efficiency")
c1->SaveAs("h2_HT_TrigEff_HLT_PFHT1050_pfx.png")

h2_HT_TrigEff_HLT_PFHT500_PFMET100_PFMHT100_IDTight->ProfileX()->Draw("COLZ")
h2_HT_TrigEff_HLT_PFHT500_PFMET100_PFMHT100_IDTight_pfx->GetYaxis()->SetTitle("Trigger efficiency")
c1->SaveAs("h2_HT_TrigEff_HLT_PFHT500_PFMET100_PFMHT100_IDTight_pfx.png")

//MET efficiency
h2_MET_TrigEff_HLT_AK8PFJet450->ProfileX()->Draw("COLZ")
h2_MET_TrigEff_HLT_AK8PFJet450_pfx->GetYaxis()->SetTitle("Trigger efficiency")
c1->SaveAs("h2_MET_TrigEff_HLT_AK8PFJet450_pfx.png")

h2_MET_TrigEff_HLT_AK8PFJet400_TrimMass30->ProfileX()->Draw("COLZ")
h2_MET_TrigEff_HLT_AK8PFJet400_TrimMass30_pfx->GetYaxis()->SetTitle("Trigger efficiency")
c1->SaveAs("h2_MET_TrigEff_HLT_AK8PFJet400_TrimMass30_pfx.png")

h2_MET_TrigEff_HLT_AK8PFHT800_TrimMass50->ProfileX()->Draw("COLZ")
h2_MET_TrigEff_HLT_AK8PFHT800_TrimMass50_pfx->GetYaxis()->SetTitle("Trigger efficiency")
c1->SaveAs("h2_MET_TrigEff_HLT_AK8PFHT800_TrimMass50_pfx.png")

h2_MET_TrigEff_HLT_PFHT1050->ProfileX()->Draw("COLZ")
h2_MET_TrigEff_HLT_PFHT1050_pfx->GetYaxis()->SetTitle("Trigger efficiency")
c1->SaveAs("h2_MET_TrigEff_HLT_PFHT1050_pfx.png")

h2_MET_TrigEff_HLT_PFHT500_PFMET100_PFMHT100_IDTight->ProfileX()->Draw("COLZ")
h2_MET_TrigEff_HLT_PFHT500_PFMET100_PFMHT100_IDTight_pfx->GetYaxis()->SetTitle("Trigger efficiency")
c1->SaveAs("h2_MET_TrigEff_HLT_PFHT500_PFMET100_PFMHT100_IDTight_pfx.png")

//2D efficiency
gStyle->SetOptStat(0)

h3_HT_MET_TrigEff_HLT_AK8PFJet450->Project3DProfile("xy")->Draw("COLZ")
h3_HT_MET_TrigEff_HLT_AK8PFJet450_pxy->GetYaxis()->SetTitle("MET (GeV)")
h3_HT_MET_TrigEff_HLT_AK8PFJet450_pxy->GetXaxis()->SetTitle("H_{T} (GeV)")
h3_HT_MET_TrigEff_HLT_AK8PFJet450_pxy->SetTitle("Trigger efficiency")
c1->SaveAs("h3_HT_MET_TrigEff_HLT_AK8PFJet450_pxy.png")

h3_HT_MET_TrigEff_HLT_AK8PFJet400_TrimMass30->Project3DProfile("xy")->Draw("COLZ")
h3_HT_MET_TrigEff_HLT_AK8PFJet400_TrimMass30_pxy->GetYaxis()->SetTitle("MET (GeV)")
h3_HT_MET_TrigEff_HLT_AK8PFJet400_TrimMass30_pxy->GetXaxis()->SetTitle("H_{T} (GeV)")
h3_HT_MET_TrigEff_HLT_AK8PFJet400_TrimMass30_pxy->SetTitle("Trigger efficiency")
c1->SaveAs("h3_HT_MET_TrigEff_HLT_AK8PFJet400_TrimMass30_pxy.png")

h3_HT_MET_TrigEff_HLT_AK8PFHT800_TrimMass50->Project3DProfile("xy")->Draw("COLZ")
h3_HT_MET_TrigEff_HLT_AK8PFHT800_TrimMass50_pxy->GetYaxis()->SetTitle("MET (GeV)")
h3_HT_MET_TrigEff_HLT_AK8PFHT800_TrimMass50_pxy->GetXaxis()->SetTitle("H_{T} (GeV)")
h3_HT_MET_TrigEff_HLT_AK8PFHT800_TrimMass50_pxy->SetTitle("Trigger efficiency")
c1->SaveAs("h3_HT_MET_TrigEff_HLT_AK8PFHT800_TrimMass50_pxy.png")

h3_HT_MET_TrigEff_HLT_PFHT1050->Project3DProfile("xy")->Draw("COLZ")
h3_HT_MET_TrigEff_HLT_PFHT1050_pxy->GetYaxis()->SetTitle("MET (GeV)")
h3_HT_MET_TrigEff_HLT_PFHT1050_pxy->GetXaxis()->SetTitle("H_{T} (GeV)")
h3_HT_MET_TrigEff_HLT_PFHT1050_pxy->SetTitle("Trigger efficiency")
c1->SaveAs("h3_HT_MET_TrigEff_HLT_PFHT1050_pxy.png")

h3_HT_MET_TrigEff_HLT_PFHT500_PFMET100_PFMHT100_IDTight->Project3DProfile("xy")->Draw("COLZ")
h3_HT_MET_TrigEff_HLT_PFHT500_PFMET100_PFMHT100_IDTight_pxy->GetYaxis()->SetTitle("MET (GeV)")
h3_HT_MET_TrigEff_HLT_PFHT500_PFMET100_PFMHT100_IDTight_pxy->GetXaxis()->SetTitle("H_{T} (GeV)")
h3_HT_MET_TrigEff_HLT_PFHT500_PFMET100_PFMHT100_IDTight_pxy->SetTitle("Trigger efficiency")
c1->SaveAs("h3_HT_MET_TrigEff_HLT_PFHT500_PFMET100_PFMHT100_IDTight_pxy.png")

//R2-MR plots

h2_R2_MR->Draw("COLZ")
c1->SaveAs("h2_R2_MR.png")
h2_R2_MR_HLT_AK8PFJet450->Draw("COLZ")
c1->SaveAs("h2_R2_MR_HLT_AK8PFJet450.png")
h2_R2_MR_HLT_AK8PFJet400_TrimMass30->Draw("COLZ")
c1->SaveAs("h2_R2_MR_HLT_AK8PFJet400_TrimMass30.png")
h2_R2_MR_HLT_AK8PFHT800_TrimMass50->Draw("COLZ")
c1->SaveAs("h2_R2_MR_HLT_AK8PFHT800_TrimMass50.png")
h2_R2_MR_HLT_PFHT1050->Draw("COLZ")
c1->SaveAs("h2_R2_MR_HLT_PFHT1050.png")
h2_R2_MR_HLT_PFHT500_PFMET100_PFMHT100_IDTight->Draw("COLZ")
c1->SaveAs("h2_R2_MR_HLT_PFHT500_PFMET100_PFMHT100_IDTight.png")

//R2-MR efficiencies

gStyle->SetOptStat(0)

h3_R2_MR_TrigEff_HLT_AK8PFJet450->Project3DProfile("yx")->Draw("COLZ")
h3_R2_MR_TrigEff_HLT_AK8PFJet450_pyx->GetXaxis()->SetTitle("M_{R} (GeV)")
h3_R2_MR_TrigEff_HLT_AK8PFJet450_pyx->GetYaxis()->SetTitle("R^{2}")
h3_R2_MR_TrigEff_HLT_AK8PFJet450_pyx->SetTitle("Trigger efficiency")
c1->SaveAs("h3_R2_MR_TrigEff_HLT_AK8PFJet450_pyx.png")

h3_R2_MR_TrigEff_HLT_AK8PFJet400_TrimMass30->Project3DProfile("yx")->Draw("COLZ")
h3_R2_MR_TrigEff_HLT_AK8PFJet400_TrimMass30_pyx->GetXaxis()->SetTitle("M_{R} (GeV)")
h3_R2_MR_TrigEff_HLT_AK8PFJet400_TrimMass30_pyx->GetYaxis()->SetTitle("R^{2}")
h3_R2_MR_TrigEff_HLT_AK8PFJet400_TrimMass30_pyx->SetTitle("Trigger efficiency")
c1->SaveAs("h3_R2_MR_TrigEff_HLT_AK8PFJet400_TrimMass30_pyx.png")

h3_R2_MR_TrigEff_HLT_AK8PFHT800_TrimMass50->Project3DProfile("yx")->Draw("COLZ")
h3_R2_MR_TrigEff_HLT_AK8PFHT800_TrimMass50_pyx->GetXaxis()->SetTitle("M_{R} (GeV)")
h3_R2_MR_TrigEff_HLT_AK8PFHT800_TrimMass50_pyx->GetYaxis()->SetTitle("R^{2}")
h3_R2_MR_TrigEff_HLT_AK8PFHT800_TrimMass50_pyx->SetTitle("Trigger efficiency")
c1->SaveAs("h3_R2_MR_TrigEff_HLT_AK8PFHT800_TrimMass50_pyx.png")

h3_R2_MR_TrigEff_HLT_PFHT1050->Project3DProfile("yx")->Draw("COLZ")
h3_R2_MR_TrigEff_HLT_PFHT1050_pyx->GetXaxis()->SetTitle("M_{R} (GeV)")
h3_R2_MR_TrigEff_HLT_PFHT1050_pyx->GetYaxis()->SetTitle("R^{2}")
h3_R2_MR_TrigEff_HLT_PFHT1050_pyx->SetTitle("Trigger efficiency")
c1->SaveAs("h3_R2_MR_TrigEff_HLT_PFHT1050_pyx.png")

h3_R2_MR_TrigEff_HLT_PFHT500_PFMET100_PFMHT100_IDTight->Project3DProfile("yx")->Draw("COLZ")
h3_R2_MR_TrigEff_HLT_PFHT500_PFMET100_PFMHT100_IDTight_pyx->GetXaxis()->SetTitle("M_{R} (GeV)")
h3_R2_MR_TrigEff_HLT_PFHT500_PFMET100_PFMHT100_IDTight_pyx->GetYaxis()->SetTitle("R^{2}")
h3_R2_MR_TrigEff_HLT_PFHT500_PFMET100_PFMHT100_IDTight_pyx->SetTitle("Trigger efficiency")
c1->SaveAs("h3_R2_MR_TrigEff_HLT_PFHT500_PFMET100_PFMHT100_IDTight_pyx.png")



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Everything with extra
h3_HT_MET_TrigEffExtra_HLT_AK8PFJet450->ProjectionX("h3_HT_MET_TrigEffExtra_HLT_AK8PFJet450_px",0,-1,2,2)->Draw()
c1->SaveAs("h3_HT_MET_TrigEffExtra_HLT_AK8PFJet450_px.png")
h3_HT_MET_TrigEffExtra_HLT_AK8PFJet450->ProjectionY("h3_HT_MET_TrigEffExtra_HLT_AK8PFJet450_py",0,-1,2,2)->Draw()
c1->SaveAs("h3_HT_MET_TrigEffExtra_HLT_AK8PFJet450_py.png")

h3_HT_MET_TrigEffExtra_HLT_AK8PFJet400_TrimMass30->ProjectionX("h3_HT_MET_TrigEffExtra_HLT_AK8PFJet400_TrimMass30_px",0,-1,2,2)->Draw()
c1->SaveAs("h3_HT_MET_TrigEffExtra_HLT_AK8PFJet400_TrimMass30_px.png")
h3_HT_MET_TrigEffExtra_HLT_AK8PFJet400_TrimMass30->ProjectionY("h3_HT_MET_TrigEffExtra_HLT_AK8PFJet400_TrimMass30_py",0,-1,2,2)->Draw()
c1->SaveAs("h3_HT_MET_TrigEffExtra_HLT_AK8PFJet400_TrimMass30_py.png")

h3_HT_MET_TrigEffExtra_HLT_AK8PFHT800_TrimMass50->ProjectionX("h3_HT_MET_TrigEffExtra_HLT_AK8PFHT800_TrimMass50_px",0,-1,2,2)->Draw()
c1->SaveAs("h3_HT_MET_TrigEffExtra_HLT_AK8PFHT800_TrimMass50_px.png")
h3_HT_MET_TrigEffExtra_HLT_AK8PFHT800_TrimMass50->ProjectionY("h3_HT_MET_TrigEffExtra_HLT_AK8PFHT800_TrimMass50_py",0,-1,2,2)->Draw()
c1->SaveAs("h3_HT_MET_TrigEffExtra_HLT_AK8PFHT800_TrimMass50_py.png")

h3_HT_MET_TrigEffExtra_HLT_PFHT1050->ProjectionX("h3_HT_MET_TrigEffExtra_HLT_PFHT1050_px",0,-1,2,2)->Draw()
c1->SaveAs("h3_HT_MET_TrigEffExtra_HLT_PFHT1050_px.png")
h3_HT_MET_TrigEffExtra_HLT_PFHT1050->ProjectionY("h3_HT_MET_TrigEffExtra_HLT_PFHT1050_py",0,-1,2,2)->Draw()
c1->SaveAs("h3_HT_MET_TrigEffExtra_HLT_PFHT1050_py.png")

h2_HT_TrigEffExtra_HLT_AK8PFJet450->ProfileX()->Draw("COLZ")
h2_HT_TrigEffExtra_HLT_AK8PFJet450_pfx->GetYaxis()->SetTitle("Trigger efficiency")
c1->SaveAs("h2_HT_TrigEffExtra_HLT_AK8PFJet450_pfx.png")

h2_HT_TrigEffExtra_HLT_AK8PFJet400_TrimMass30->ProfileX()->Draw("COLZ")
h2_HT_TrigEffExtra_HLT_AK8PFJet400_TrimMass30_pfx->GetYaxis()->SetTitle("Trigger efficiency")
c1->SaveAs("h2_HT_TrigEffExtra_HLT_AK8PFJet400_TrimMass30_pfx.png")

h2_HT_TrigEffExtra_HLT_AK8PFHT800_TrimMass50->ProfileX()->Draw("COLZ")
h2_HT_TrigEffExtra_HLT_AK8PFHT800_TrimMass50_pfx->GetYaxis()->SetTitle("Trigger efficiency")
c1->SaveAs("h2_HT_TrigEffExtra_HLT_AK8PFHT800_TrimMass50_pfx.png")

h2_HT_TrigEffExtra_HLT_PFHT1050->ProfileX()->Draw("COLZ")
h2_HT_TrigEffExtra_HLT_PFHT1050_pfx->GetYaxis()->SetTitle("Trigger efficiency")
c1->SaveAs("h2_HT_TrigEffExtra_HLT_PFHT1050_pfx.png")

h2_MET_TrigEffExtra_HLT_AK8PFJet450->ProfileX()->GetXaxis()->SetRange(0,2000)
h2_MET_TrigEffExtra_HLT_AK8PFJet450->ProfileX()->Draw("COLZ")
h2_MET_TrigEffExtra_HLT_AK8PFJet450_pfx->GetYaxis()->SetTitle("Trigger efficiency")
c1->SaveAs("h2_MET_TrigEffExtra_HLT_AK8PFJet450_pfx.png")

h2_MET_TrigEffExtra_HLT_AK8PFJet400_TrimMass30->ProfileX()->Draw("COLZ")
h2_MET_TrigEffExtra_HLT_AK8PFJet400_TrimMass30_pfx->GetYaxis()->SetTitle("Trigger efficiency")
c1->SaveAs("h2_MET_TrigEffExtra_HLT_AK8PFJet400_TrimMass30_pfx.png")

h2_MET_TrigEffExtra_HLT_AK8PFHT800_TrimMass50->ProfileX()->Draw("COLZ")
h2_MET_TrigEffExtra_HLT_AK8PFHT800_TrimMass50_pfx->GetYaxis()->SetTitle("Trigger efficiency")
c1->SaveAs("h2_MET_TrigEffExtra_HLT_AK8PFHT800_TrimMass50_pfx.png")

h2_MET_TrigEffExtra_HLT_PFHT1050->ProfileX()->Draw("COLZ")
h2_MET_TrigEffExtra_HLT_PFHT1050_pfx->GetYaxis()->SetTitle("Trigger efficiency")
c1->SaveAs("h2_MET_TrigEffExtra_HLT_PFHT1050_pfx.png")

gStyle->SetOptStat(0)

h3_HT_MET_TrigEffExtra_HLT_AK8PFJet450->Project3DProfile("xy")->Draw("COLZ")
h3_HT_MET_TrigEffExtra_HLT_AK8PFJet450_pxy->GetYaxis()->SetTitle("MET (GeV)")
h3_HT_MET_TrigEffExtra_HLT_AK8PFJet450_pxy->GetXaxis()->SetTitle("H_{T} (GeV)")
h3_HT_MET_TrigEffExtra_HLT_AK8PFJet450_pxy->SetTitle("Trigger efficiency")
c1->SaveAs("h3_HT_MET_TrigEffExtra_HLT_AK8PFJet450_pxy.png")

h3_HT_MET_TrigEffExtra_HLT_AK8PFJet400_TrimMass30->Project3DProfile("xy")->Draw("COLZ")
h3_HT_MET_TrigEffExtra_HLT_AK8PFJet400_TrimMass30_pxy->GetYaxis()->SetTitle("MET (GeV)")
h3_HT_MET_TrigEffExtra_HLT_AK8PFJet400_TrimMass30_pxy->GetXaxis()->SetTitle("H_{T} (GeV)")
h3_HT_MET_TrigEffExtra_HLT_AK8PFJet400_TrimMass30_pxy->SetTitle("Trigger efficiency")
c1->SaveAs("h3_HT_MET_TrigEffExtra_HLT_AK8PFJet400_TrimMass30_pxy.png")

h3_HT_MET_TrigEffExtra_HLT_AK8PFHT800_TrimMass50->Project3DProfile("xy")->Draw("COLZ")
h3_HT_MET_TrigEffExtra_HLT_AK8PFHT800_TrimMass50_pxy->GetYaxis()->SetTitle("MET (GeV)")
h3_HT_MET_TrigEffExtra_HLT_AK8PFHT800_TrimMass50_pxy->GetXaxis()->SetTitle("H_{T} (GeV)")
h3_HT_MET_TrigEffExtra_HLT_AK8PFHT800_TrimMass50_pxy->SetTitle("Trigger efficiency")
c1->SaveAs("h3_HT_MET_TrigEffExtra_HLT_AK8PFHT800_TrimMass50_pxy.png")

h3_HT_MET_TrigEffExtra_HLT_PFHT1050->Project3DProfile("xy")->Draw("COLZ")
h3_HT_MET_TrigEffExtra_HLT_PFHT1050_pxy->GetYaxis()->SetTitle("MET (GeV)")
h3_HT_MET_TrigEffExtra_HLT_PFHT1050_pxy->GetXaxis()->SetTitle("H_{T} (GeV)")
h3_HT_MET_TrigEffExtra_HLT_PFHT1050_pxy->SetTitle("Trigger efficiency")
c1->SaveAs("h3_HT_MET_TrigEffExtra_HLT_PFHT1050_pxy.png")

h2_R2_MR->Draw("COLZ")
c1->SaveAs("h2_R2_MRExtra.png")
h2_R2_MR_HLT_AK8PFJet450Extra->Draw("COLZ")
c1->SaveAs("h2_R2_MR_HLT_AK8PFJet450Extra.png")
h2_R2_MR_HLT_AK8PFJet400_TrimMass30Extra->Draw("COLZ")
c1->SaveAs("h2_R2_MR_HLT_AK8PFJet400_TrimMass30Extra.png")
h2_R2_MR_HLT_AK8PFHT800_TrimMass50Extra->Draw("COLZ")
c1->SaveAs("h2_R2_MR_HLT_AK8PFHT800_TrimMass50Extra.png")
h2_R2_MR_HLT_PFHT1050Extra->Draw("COLZ")
c1->SaveAs("h2_R2_MR_HLT_PFHT1050Extra.png")

gStyle->SetOptStat(0)

h3_R2_MR_TrigEffExtra_HLT_AK8PFJet450->Project3DProfile("yx")->Draw("COLZ")
h3_R2_MR_TrigEffExtra_HLT_AK8PFJet450_pyx->GetXaxis()->SetTitle("M_{R} (GeV)")
h3_R2_MR_TrigEffExtra_HLT_AK8PFJet450_pyx->GetYaxis()->SetTitle("R^{2}")
h3_R2_MR_TrigEffExtra_HLT_AK8PFJet450_pyx->SetTitle("Trigger efficiency")
c1->SaveAs("h3_R2_MR_TrigEffExtra_HLT_AK8PFJet450_pyx.png")

h3_R2_MR_TrigEffExtra_HLT_AK8PFJet400_TrimMass30->Project3DProfile("yx")->Draw("COLZ")
h3_R2_MR_TrigEffExtra_HLT_AK8PFJet400_TrimMass30_pyx->GetXaxis()->SetTitle("M_{R} (GeV)")
h3_R2_MR_TrigEffExtra_HLT_AK8PFJet400_TrimMass30_pyx->GetYaxis()->SetTitle("R^{2}")
h3_R2_MR_TrigEffExtra_HLT_AK8PFJet400_TrimMass30_pyx->SetTitle("Trigger efficiency")
c1->SaveAs("h3_R2_MR_TrigEffExtra_HLT_AK8PFJet400_TrimMass30_pyx.png")

h3_R2_MR_TrigEffExtra_HLT_AK8PFHT800_TrimMass50->Project3DProfile("yx")->Draw("COLZ")
h3_R2_MR_TrigEffExtra_HLT_AK8PFHT800_TrimMass50_pyx->GetXaxis()->SetTitle("M_{R} (GeV)")
h3_R2_MR_TrigEffExtra_HLT_AK8PFHT800_TrimMass50_pyx->GetYaxis()->SetTitle("R^{2}")
h3_R2_MR_TrigEffExtra_HLT_AK8PFHT800_TrimMass50_pyx->SetTitle("Trigger efficiency")
c1->SaveAs("h3_R2_MR_TrigEffExtra_HLT_AK8PFHT800_TrimMass50_pyx.png")

h3_R2_MR_TrigEffExtra_HLT_PFHT1050->Project3DProfile("yx")->Draw("COLZ")
h3_R2_MR_TrigEffExtra_HLT_PFHT1050_pyx->GetXaxis()->SetTitle("M_{R} (GeV)")
h3_R2_MR_TrigEffExtra_HLT_PFHT1050_pyx->GetYaxis()->SetTitle("R^{2}")
h3_R2_MR_TrigEffExtra_HLT_PFHT1050_pyx->SetTitle("Trigger efficiency")
c1->SaveAs("h3_R2_MR_TrigEffExtra_HLT_PFHT1050_pyx.png")
  
//MR and R2 distributions for both case
  h3_R2_MR_TrigEff_HLT_AK8PFJet450->ProjectionX("h3_R2_MR_TrigEff_HLT_AK8PFJet450_px",0,-1,2,2)->Draw()
c1->SaveAs("h3_R2_MR_TrigEff_HLT_AK8PFJet450_px.png")
h3_R2_MR_TrigEff_HLT_AK8PFJet400_TrimMass30->ProjectionX("h3_R2_MR_TrigEff_HLT_AK8PFJet400_TrimMass30_px",0,-1,2,2)->Draw()
c1->SaveAs("h3_R2_MR_TrigEff_HLT_AK8PFJet400_TrimMass30_px.png")
h3_R2_MR_TrigEff_HLT_AK8PFHT800_TrimMass50->ProjectionX("h3_R2_MR_TrigEff_HLT_AK8PFHT800_TrimMass50_px",0,-1,2,2)->Draw()
c1->SaveAs("h3_R2_MR_TrigEff_HLT_AK8PFHT800_TrimMass50_px.png")
h3_R2_MR_TrigEff_HLT_PFHT1050->ProjectionX("h3_R2_MR_TrigEff_HLT_PFHT1050_px",0,-1,2,2)->Draw()
c1->SaveAs("h3_R2_MR_TrigEff_HLT_PFHT1050_px.png")
h3_R2_MR_TrigEff_HLT_PFHT500_PFMET100_PFMHT100_IDTight->ProjectionX("h3_R2_MR_TrigEff_HLT_PFHT500_PFMET100_PFMHT100_IDTight_px",0,-1,2,2)->Draw()
c1->SaveAs("h3_R2_MR_TrigEff_HLT_PFHT500_PFMET100_PFMHT100_IDTight_px.png")

h3_R2_MR_TrigEff_HLT_AK8PFJet450->ProjectionY("h3_R2_MR_TrigEff_HLT_AK8PFJet450_py",0,-1,2,2)->Draw()
c1->SaveAs("h3_R2_MR_TrigEff_HLT_AK8PFJet450_py.png")
h3_R2_MR_TrigEff_HLT_AK8PFJet400_TrimMass30->ProjectionY("h3_R2_MR_TrigEff_HLT_AK8PFJet400_TrimMass30_py",0,-1,2,2)->Draw()
c1->SaveAs("h3_R2_MR_TrigEff_HLT_AK8PFJet400_TrimMass30_py.png")
h3_R2_MR_TrigEff_HLT_AK8PFHT800_TrimMass50->ProjectionY("h3_R2_MR_TrigEff_HLT_AK8PFHT800_TrimMass50_py",0,-1,2,2)->Draw()
c1->SaveAs("h3_R2_MR_TrigEff_HLT_AK8PFHT800_TrimMass50_py.png")
h3_R2_MR_TrigEff_HLT_PFHT1050->ProjectionY("h3_R2_MR_TrigEff_HLT_PFHT1050_py",0,-1,2,2)->Draw()
c1->SaveAs("h3_R2_MR_TrigEff_HLT_PFHT1050_py.png")
h3_R2_MR_TrigEff_HLT_PFHT500_PFMET100_PFMHT100_IDTight->ProjectionY("h3_R2_MR_TrigEff_HLT_PFHT500_PFMET100_PFMHT100_IDTight_py",0,-1,2,2)->Draw()
c1->SaveAs("h3_R2_MR_TrigEff_HLT_PFHT500_PFMET100_PFMHT100_IDTight_py.png")

h3_R2_MR_TrigEffExtra_HLT_AK8PFJet450->ProjectionX("h3_R2_MR_TrigEffExtra_HLT_AK8PFJet450_px",0,-1,2,2)->Draw()
c1->SaveAs("h3_R2_MR_TrigEffExtra_HLT_AK8PFJet450_px.png")
h3_R2_MR_TrigEffExtra_HLT_AK8PFJet400_TrimMass30->ProjectionX("h3_R2_MR_TrigEffExtra_HLT_AK8PFJet400_TrimMass30_px",0,-1,2,2)->Draw()
c1->SaveAs("h3_R2_MR_TrigEffExtra_HLT_AK8PFJet400_TrimMass30_px.png")
h3_R2_MR_TrigEffExtra_HLT_AK8PFHT800_TrimMass50->ProjectionX("h3_R2_MR_TrigEffExtra_HLT_AK8PFHT800_TrimMass50_px",0,-1,2,2)->Draw()
c1->SaveAs("h3_R2_MR_TrigEffExtra_HLT_AK8PFHT800_TrimMass50_px.png")
h3_R2_MR_TrigEffExtra_HLT_PFHT1050->ProjectionX("h3_R2_MR_TrigEffExtra_HLT_PFHT1050_px",0,-1,2,2)->Draw()
c1->SaveAs("h3_R2_MR_TrigEffExtra_HLT_PFHT1050_px.png")

h3_R2_MR_TrigEffExtra_HLT_AK8PFJet450->ProjectionY("h3_R2_MR_TrigEffExtra_HLT_AK8PFJet450_py",0,-1,2,2)->Draw()
c1->SaveAs("h3_R2_MR_TrigEffExtra_HLT_AK8PFJet450_py.png")
h3_R2_MR_TrigEffExtra_HLT_AK8PFJet400_TrimMass30->ProjectionY("h3_R2_MR_TrigEffExtra_HLT_AK8PFJet400_TrimMass30_py",0,-1,2,2)->Draw()
c1->SaveAs("h3_R2_MR_TrigEffExtra_HLT_AK8PFJet400_TrimMass30_py.png")
h3_R2_MR_TrigEffExtra_HLT_AK8PFHT800_TrimMass50->ProjectionY("h3_R2_MR_TrigEffExtra_HLT_AK8PFHT800_TrimMass50_py",0,-1,2,2)->Draw()
c1->SaveAs("h3_R2_MR_TrigEffExtra_HLT_AK8PFHT800_TrimMass50_py.png")
h3_R2_MR_TrigEffExtra_HLT_PFHT1050->ProjectionY("h3_R2_MR_TrigEffExtra_HLT_PFHT1050_py",0,-1,2,2)->Draw()
c1->SaveAs("h3_R2_MR_TrigEffExtra_HLT_PFHT1050_py.png")

//Average efficiency
h3_HT_MET_TrigEff_HLT_AK8PFJet450->Project3DProfile("xz")->GetMean(1)
h3_HT_MET_TrigEff_HLT_AK8PFJet400_TrimMass30->Project3DProfile("xz")->GetMean(1)
h3_HT_MET_TrigEff_HLT_AK8PFHT800_TrimMass50->Project3DProfile("xz")->GetMean(1)
h3_HT_MET_TrigEff_HLT_PFHT1050->Project3DProfile("xz")->GetMean(1)
h3_HT_MET_TrigEff_HLT_PFHT500_PFMET100_PFMHT100_IDTight->Project3DProfile("xz")->GetMean(1)

//Average efficiency
h3_HT_MET_TrigEffExtra_HLT_AK8PFJet450->Project3DProfile("xz")->GetMean(1)
h3_HT_MET_TrigEffExtra_HLT_AK8PFJet400_TrimMass30->Project3DProfile("xz")->GetMean(1)
h3_HT_MET_TrigEffExtra_HLT_AK8PFHT800_TrimMass50->Project3DProfile("xz")->GetMean(1)
h3_HT_MET_TrigEffExtra_HLT_PFHT1050->Project3DProfile("xz")->GetMean(1)
h3_HT_MET_TrigEffExtra_HLT_PFHT500_PFMET100_PFMHT100_IDTight->Project3DProfile("xz")->GetMean(1)
  
// Combination of two (three triggers)
  //HT and MET distributions
h3_HT_MET_TrigEff_HLT_Combined1->ProjectionX("h3_HT_MET_TrigEff_HLT_Combined1_px",0,-1,2,2)->Draw()
c1->SaveAs("h3_HT_MET_TrigEff_HLT_Combined1_px.png")
h3_HT_MET_TrigEff_HLT_Combined1->ProjectionY("h3_HT_MET_TrigEff_HLT_Combined1_py",0,-1,2,2)->Draw()
c1->SaveAs("h3_HT_MET_TrigEff_HLT_Combined1_py.png")

h3_HT_MET_TrigEff_HLT_Combined2->ProjectionX("h3_HT_MET_TrigEff_HLT_Combined2_px",0,-1,2,2)->Draw()
c1->SaveAs("h3_HT_MET_TrigEff_HLT_Combined2_px.png")
h3_HT_MET_TrigEff_HLT_Combined2->ProjectionY("h3_HT_MET_TrigEff_HLT_Combined2_py",0,-1,2,2)->Draw()
c1->SaveAs("h3_HT_MET_TrigEff_HLT_Combined2_py.png")

//HT efficiency
h2_HT_TrigEff_HLT_Combined1->ProfileX()->Draw("COLZ")
h2_HT_TrigEff_HLT_Combined1_pfx->GetYaxis()->SetTitle("Trigger efficiency")
 h2_HT_TrigEff_HLT_Combined2_pfx->GetYaxis()->SetRangeUser(0.95,1.001)
c1->SaveAs("h2_HT_TrigEff_HLT_Combined1_pfx.png")

h2_HT_TrigEff_HLT_Combined2->ProfileX()->Draw("COLZ")
h2_HT_TrigEff_HLT_Combined2_pfx->GetYaxis()->SetTitle("Trigger efficiency")
 h2_HT_TrigEff_HLT_Combined2_pfx->GetYaxis()->SetRangeUser(0.95,1.001)
c1->SaveAs("h2_HT_TrigEff_HLT_Combined2_pfx.png")

//MET efficiency
h2_MET_TrigEff_HLT_Combined1->ProfileX()->Draw("COLZ")
h2_MET_TrigEff_HLT_Combined1_pfx->GetYaxis()->SetTitle("Trigger efficiency")
h2_MET_TrigEff_HLT_Combined1_pfx->GetYaxis()->SetRangeUser(0.95,1.001)
c1->SaveAs("h2_MET_TrigEff_HLT_Combined1_pfx.png")

h2_MET_TrigEff_HLT_Combined2->ProfileX()->Draw("COLZ")
h2_MET_TrigEff_HLT_Combined2_pfx->GetYaxis()->SetTitle("Trigger efficiency")
h2_MET_TrigEff_HLT_Combined2_pfx->GetYaxis()->SetRangeUser(0.95,1.001)
c1->SaveAs("h2_MET_TrigEff_HLT_Combined2_pfx.png")

//2D efficiency
gStyle->SetOptStat(0)

h3_HT_MET_TrigEff_HLT_Combined1->Project3DProfile("xy")->Draw("COLZ")
h3_HT_MET_TrigEff_HLT_Combined1_pxy->GetYaxis()->SetTitle("MET (GeV)")
h3_HT_MET_TrigEff_HLT_Combined1_pxy->GetXaxis()->SetTitle("H_{T} (GeV)")
h3_HT_MET_TrigEff_HLT_Combined1_pxy->SetTitle("Trigger efficiency")
h3_HT_MET_TrigEff_HLT_Combined1_pxy->GetZaxis()->SetRangeUser(0.95,1.001)
c1->SaveAs("h3_HT_MET_TrigEff_HLT_Combined1_pxy.png")

h3_HT_MET_TrigEff_HLT_Combined2->Project3DProfile("xy")->Draw("COLZ")
h3_HT_MET_TrigEff_HLT_Combined2_pxy->GetYaxis()->SetTitle("MET (GeV)")
h3_HT_MET_TrigEff_HLT_Combined2_pxy->GetXaxis()->SetTitle("H_{T} (GeV)")
h3_HT_MET_TrigEff_HLT_Combined2_pxy->SetTitle("Trigger efficiency")
h3_HT_MET_TrigEff_HLT_Combined2_pxy->GetZaxis()->SetRangeUser(0.95,1.001)
c1->SaveAs("h3_HT_MET_TrigEff_HLT_Combined2_pxy.png")

//R2-MR plots
h2_R2_MR_HLT_Combined1->Draw("COLZ")
c1->SaveAs("h2_R2_MR_HLT_Combined1.png")
h2_R2_MR_HLT_Combined2->Draw("COLZ")
c1->SaveAs("h2_R2_MR_HLT_Combined2.png")


//R2-MR efficiencies

gStyle->SetOptStat(0)

h3_R2_MR_TrigEff_HLT_Combined1->Project3DProfile("yx")->Draw("COLZ")
h3_R2_MR_TrigEff_HLT_Combined1_pyx->GetXaxis()->SetTitle("M_{R} (GeV)")
h3_R2_MR_TrigEff_HLT_Combined1_pyx->GetYaxis()->SetTitle("R^{2}")
h3_R2_MR_TrigEff_HLT_Combined1_pyx->SetTitle("Trigger efficiency")
h3_R2_MR_TrigEff_HLT_Combined1_pyx->GetZaxis()->SetRangeUser(0.95,1.001)
c1->SaveAs("h3_R2_MR_TrigEff_HLT_Combined1_pyx.png")

h3_R2_MR_TrigEff_HLT_Combined2->Project3DProfile("yx")->Draw("COLZ")
h3_R2_MR_TrigEff_HLT_Combined2_pyx->GetXaxis()->SetTitle("M_{R} (GeV)")
h3_R2_MR_TrigEff_HLT_Combined2_pyx->GetYaxis()->SetTitle("R^{2}")
h3_R2_MR_TrigEff_HLT_Combined2_pyx->SetTitle("Trigger efficiency")
h3_R2_MR_TrigEff_HLT_Combined2_pyx->GetZaxis()->SetRangeUser(0.95,1.001)
c1->SaveAs("h3_R2_MR_TrigEff_HLT_Combined2_pyx.png")
  
  h3_R2_MR_TrigEff_HLT_Combined1->ProjectionX("h3_R2_MR_TrigEff_HLT_Combined1_px",0,-1,2,2)->Draw()
c1->SaveAs("h3_R2_MR_TrigEff_HLT_Combined1_px.png")

h3_R2_MR_TrigEff_HLT_Combined1->ProjectionY("h3_R2_MR_TrigEff_HLT_Combined1_py",0,-1,2,2)->Draw()
c1->SaveAs("h3_R2_MR_TrigEff_HLT_Combined1_py.png")

h3_R2_MR_TrigEff_HLT_Combined2->ProjectionX("h3_R2_MR_TrigEff_HLT_Combined2_px",0,-1,2,2)->Draw()
c1->SaveAs("h3_R2_MR_TrigEff_HLT_Combined2_px.png")

h3_R2_MR_TrigEff_HLT_Combined2->ProjectionY("h3_R2_MR_TrigEff_HLT_Combined2_py",0,-1,2,2)->Draw()
c1->SaveAs("h3_R2_MR_TrigEff_HLT_Combined2_py.png")



//Average efficiency
h3_HT_MET_TrigEff_HLT_Combined1->Project3DProfile("xz")->GetMean(1)
h3_HT_MET_TrigEff_HLT_Combined2->Project3DProfile("yz")->GetMean(1)
  
