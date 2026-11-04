// rea decompile_all
// name: PRGSequencer::InitializeElement
// address: 0x1ba1ac
// body: available
// range: 0x1ba1ac-0x1ba2f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PRGSequencer::InitializeElement(void*, unsigned int, int) */

void __thiscall
PRGSequencer::InitializeElement(PRGSequencer *this,void *param_1,uint param_2,int param_3)

{
  long lVar1;
  undefined4 in_register_0000000c;
  undefined8 uVar2;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar6 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar8 = ___bzero(param_1,(long)param_3,param_2,CONCAT44(in_register_0000000c,param_3));
  auVar3 = _DAT_0032b310;
  auVar7._0_8_ = auVar8._8_8_;
  auVar7._8_8_ = extraout_XMM1_Qb;
  auVar8._8_8_ = extraout_XMM0_Qb;
  switch(param_2) {
  case 3:
    auVar3 = pmovsxbw(auVar8,0x202020202020202);
    uVar2 = auVar3._0_8_;
    break;
  case 4:
  case 5:
    auVar3 = pmovsxbw(auVar8,0x203020302030203);
    uVar2 = auVar3._0_8_;
    break;
  case 6:
  case 7:
  case 8:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1e:
    uVar2 = SUB168(ZEXT416(0x20000),0);
    break;
  case 9:
    uVar2 = SUB168(ZEXT416(0x40000),0);
    break;
  case 10:
    uVar2 = SUB168(ZEXT416(0x10000),0);
    break;
  case 0xb:
    auVar4 = pmovsxbq(auVar8,0x302);
    auVar6 = pmovsxbq(auVar7,0x100);
    lVar1 = 0x6c;
    auVar8 = pmovsxbq(in_XMM5,0x404);
    do {
      auVar7 = auVar6 ^ auVar3;
      if (auVar7._4_4_ == -0x80000000 && auVar7._0_4_ < -0x7fffffce) {
        *(undefined4 *)((long)param_1 + lVar1 + -0x60) = 0xffffffff;
      }
      if (auVar7._12_4_ == -0x80000000 && auVar7._8_4_ < -0x7fffffce) {
        *(undefined4 *)((long)param_1 + lVar1 + -0x40) = 0xffffffff;
      }
      auVar7 = auVar4 ^ auVar3;
      if (auVar7._4_4_ == -0x80000000 && auVar7._0_4_ < -0x7fffffce) {
        *(undefined4 *)((long)param_1 + lVar1 + -0x20) = 0xffffffff;
      }
      if (auVar7._12_4_ == -0x80000000 && auVar7._8_4_ < -0x7fffffce) {
        *(undefined4 *)((long)param_1 + lVar1) = 0xffffffff;
      }
      lVar5 = auVar6._8_8_;
      auVar6._0_8_ = auVar6._0_8_ + auVar8._0_8_;
      auVar6._8_8_ = lVar5 + auVar8._8_8_;
      lVar5 = auVar4._8_8_;
      auVar4._0_8_ = auVar4._0_8_ + auVar8._0_8_;
      auVar4._8_8_ = lVar5 + auVar8._8_8_;
      lVar1 = lVar1 + 0x80;
    } while (lVar1 != 0x6ec);
  default:
    goto switchD_001ba1e0_caseD_c;
  }
  *(undefined8 *)((long)param_1 + 0xc) = uVar2;
switchD_001ba1e0_caseD_c:
  return;
}

