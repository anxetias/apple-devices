// rea decompile_all
// name: _gcm_init
// address: 0x13f80
// body: available
// range: 0x13f80-0x1437d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00014355) */
/* WARNING: Removing unreachable block (ram,0x00014342) */
/* WARNING: Removing unreachable block (ram,0x0001432b) */
/* WARNING: Removing unreachable block (ram,0x000142cf) */
/* WARNING: Removing unreachable block (ram,0x000142bc) */
/* WARNING: Removing unreachable block (ram,0x000142a5) */
/* WARNING: Removing unreachable block (ram,0x00014249) */
/* WARNING: Removing unreachable block (ram,0x00014236) */
/* WARNING: Removing unreachable block (ram,0x0001421f) */
/* WARNING: Removing unreachable block (ram,0x000141c3) */
/* WARNING: Removing unreachable block (ram,0x000141b0) */
/* WARNING: Removing unreachable block (ram,0x00014199) */
/* WARNING: Removing unreachable block (ram,0x0001413d) */
/* WARNING: Removing unreachable block (ram,0x0001412a) */
/* WARNING: Removing unreachable block (ram,0x00014113) */
/* WARNING: Removing unreachable block (ram,0x000140b7) */
/* WARNING: Removing unreachable block (ram,0x000140a4) */
/* WARNING: Removing unreachable block (ram,0x0001408d) */
/* WARNING: Removing unreachable block (ram,0x00014031) */
/* WARNING: Removing unreachable block (ram,0x0001401e) */
/* WARNING: Removing unreachable block (ram,0x00014007) */
/* WARNING: Removing unreachable block (ram,0x00013fa5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _gcm_init(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined4 uVar63;
  undefined4 uVar66;
  ulong uVar64;
  undefined1 auVar65 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  
  auVar81 = pshufb(*param_2,_DAT_00014800);
  auVar82._0_8_ = auVar81._0_8_ << 1;
  auVar82._8_8_ = auVar81._8_8_ << 1;
  auVar99._0_4_ = auVar81._12_4_ >> 0x1f;
  auVar99._4_4_ = auVar99._0_4_;
  auVar99._8_4_ = auVar99._0_4_;
  auVar99._12_4_ = auVar99._0_4_;
  auVar65._8_8_ = 0;
  auVar65._0_8_ = auVar81._0_8_ >> 0x3f;
  auVar82 = (auVar82 | auVar65 << 0x40) ^ auVar99 & _DAT_00014810;
  *param_1 = auVar82;
  uVar63 = auVar82._0_4_;
  uVar66 = auVar82._4_4_;
  auVar83._0_8_ = auVar82._8_8_;
  auVar83._8_4_ = uVar63;
  auVar83._12_4_ = uVar66;
  param_1[8] = auVar83 ^ auVar82;
  auVar87._8_4_ = uVar63;
  auVar87._0_8_ = auVar83._0_8_;
  auVar87._12_4_ = uVar66;
  auVar100._8_4_ = uVar63;
  auVar100._0_8_ = auVar83._0_8_;
  auVar100._12_4_ = uVar66;
  uVar64 = auVar82._0_8_;
  auVar81._8_8_ = 0;
  auVar81._0_8_ = uVar64;
  auVar84._8_8_ = 0;
  auVar84._0_8_ = uVar64;
  auVar65 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar81 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar65 = auVar65 ^ auVar84 << uVar1;
    }
  }
  auVar28._8_8_ = 0;
  auVar28._0_8_ = auVar83._0_8_;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = auVar83._0_8_;
  auVar81 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar28 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar81 = auVar81 ^ auVar35 << uVar1;
    }
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = SUB168(auVar87 ^ auVar82,0);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = SUB168(auVar100 ^ auVar82,0);
  auVar84 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar2 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar84 = auVar84 ^ auVar15 << uVar1;
    }
  }
  auVar84 = auVar84 ^ auVar81 ^ auVar65;
  auVar56._8_8_ = 0;
  auVar56._0_8_ = auVar84._0_8_;
  auVar65 = auVar65 ^ auVar56 << 0x40;
  auVar67._0_8_ = auVar65._8_8_;
  auVar67._8_4_ = auVar65._0_4_;
  auVar67._12_4_ = auVar65._4_4_;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = auVar65._0_8_;
  auVar65 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar42 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar65 = auVar65 ^ ZEXT816(0xc200000000000000) << uVar1;
    }
  }
  auVar65 = auVar65 ^ auVar67;
  auVar68._0_8_ = auVar65._8_8_;
  auVar68._8_4_ = auVar65._0_4_;
  auVar68._12_4_ = auVar65._4_4_;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = auVar65._0_8_;
  auVar65 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar43 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar65 = auVar65 ^ ZEXT816(0xc200000000000000) << uVar1;
    }
  }
  auVar65 = auVar65 ^ auVar84 >> 0x40 ^ auVar81 ^ auVar68;
  param_1[1] = auVar65;
  auVar85._0_8_ = auVar65._8_8_;
  auVar85._8_4_ = auVar65._0_4_;
  auVar85._12_4_ = auVar65._4_4_;
  param_1[9] = auVar85 ^ auVar65;
  auVar86._8_4_ = auVar65._0_4_;
  auVar86._0_8_ = auVar85._0_8_;
  auVar86._12_4_ = auVar65._4_4_;
  auVar101._8_4_ = uVar63;
  auVar101._0_8_ = auVar83._0_8_;
  auVar101._12_4_ = uVar66;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = auVar65._0_8_;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar64;
  auVar81 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar3 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar81 = auVar81 ^ auVar16 << uVar1;
    }
  }
  auVar29._8_8_ = 0;
  auVar29._0_8_ = auVar85._0_8_;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = auVar83._0_8_;
  auVar84 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar29 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar84 = auVar84 ^ auVar36 << uVar1;
    }
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = SUB168(auVar86 ^ auVar65,0);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = SUB168(auVar101 ^ auVar82,0);
  auVar65 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar4 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar65 = auVar65 ^ auVar17 << uVar1;
    }
  }
  auVar87 = auVar65 ^ auVar84 ^ auVar81;
  auVar57._8_8_ = 0;
  auVar57._0_8_ = auVar87._0_8_;
  auVar81 = auVar81 ^ auVar57 << 0x40;
  auVar69._0_8_ = auVar81._8_8_;
  auVar69._8_4_ = auVar81._0_4_;
  auVar69._12_4_ = auVar81._4_4_;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = auVar81._0_8_;
  auVar65 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar44 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar65 = auVar65 ^ ZEXT816(0xc200000000000000) << uVar1;
    }
  }
  auVar65 = auVar65 ^ auVar69;
  auVar70._0_8_ = auVar65._8_8_;
  auVar70._8_4_ = auVar65._0_4_;
  auVar70._12_4_ = auVar65._4_4_;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = auVar65._0_8_;
  auVar65 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar45 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar65 = auVar65 ^ ZEXT816(0xc200000000000000) << uVar1;
    }
  }
  auVar65 = auVar65 ^ auVar87 >> 0x40 ^ auVar84 ^ auVar70;
  param_1[2] = auVar65;
  auVar88._0_8_ = auVar65._8_8_;
  auVar88._8_4_ = auVar65._0_4_;
  auVar88._12_4_ = auVar65._4_4_;
  param_1[10] = auVar88 ^ auVar65;
  auVar89._8_4_ = auVar65._0_4_;
  auVar89._0_8_ = auVar88._0_8_;
  auVar89._12_4_ = auVar65._4_4_;
  auVar102._8_4_ = uVar63;
  auVar102._0_8_ = auVar83._0_8_;
  auVar102._12_4_ = uVar66;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = auVar65._0_8_;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar64;
  auVar81 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar5 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar81 = auVar81 ^ auVar18 << uVar1;
    }
  }
  auVar30._8_8_ = 0;
  auVar30._0_8_ = auVar88._0_8_;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = auVar83._0_8_;
  auVar84 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar30 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar84 = auVar84 ^ auVar37 << uVar1;
    }
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = SUB168(auVar89 ^ auVar65,0);
  auVar19._8_8_ = 0;
  auVar19._0_8_ = SUB168(auVar102 ^ auVar82,0);
  auVar65 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar6 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar65 = auVar65 ^ auVar19 << uVar1;
    }
  }
  auVar87 = auVar65 ^ auVar84 ^ auVar81;
  auVar58._8_8_ = 0;
  auVar58._0_8_ = auVar87._0_8_;
  auVar81 = auVar81 ^ auVar58 << 0x40;
  auVar71._0_8_ = auVar81._8_8_;
  auVar71._8_4_ = auVar81._0_4_;
  auVar71._12_4_ = auVar81._4_4_;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = auVar81._0_8_;
  auVar65 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar46 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar65 = auVar65 ^ ZEXT816(0xc200000000000000) << uVar1;
    }
  }
  auVar65 = auVar65 ^ auVar71;
  auVar72._0_8_ = auVar65._8_8_;
  auVar72._8_4_ = auVar65._0_4_;
  auVar72._12_4_ = auVar65._4_4_;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = auVar65._0_8_;
  auVar65 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar47 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar65 = auVar65 ^ ZEXT816(0xc200000000000000) << uVar1;
    }
  }
  auVar65 = auVar65 ^ auVar87 >> 0x40 ^ auVar84 ^ auVar72;
  param_1[3] = auVar65;
  auVar90._0_8_ = auVar65._8_8_;
  auVar90._8_4_ = auVar65._0_4_;
  auVar90._12_4_ = auVar65._4_4_;
  param_1[0xb] = auVar90 ^ auVar65;
  auVar91._8_4_ = auVar65._0_4_;
  auVar91._0_8_ = auVar90._0_8_;
  auVar91._12_4_ = auVar65._4_4_;
  auVar103._8_4_ = uVar63;
  auVar103._0_8_ = auVar83._0_8_;
  auVar103._12_4_ = uVar66;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = auVar65._0_8_;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar64;
  auVar81 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar7 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar81 = auVar81 ^ auVar20 << uVar1;
    }
  }
  auVar31._8_8_ = 0;
  auVar31._0_8_ = auVar90._0_8_;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = auVar83._0_8_;
  auVar84 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar31 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar84 = auVar84 ^ auVar38 << uVar1;
    }
  }
  auVar8._8_8_ = 0;
  auVar8._0_8_ = SUB168(auVar91 ^ auVar65,0);
  auVar21._8_8_ = 0;
  auVar21._0_8_ = SUB168(auVar103 ^ auVar82,0);
  auVar65 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar8 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar65 = auVar65 ^ auVar21 << uVar1;
    }
  }
  auVar87 = auVar65 ^ auVar84 ^ auVar81;
  auVar59._8_8_ = 0;
  auVar59._0_8_ = auVar87._0_8_;
  auVar81 = auVar81 ^ auVar59 << 0x40;
  auVar73._0_8_ = auVar81._8_8_;
  auVar73._8_4_ = auVar81._0_4_;
  auVar73._12_4_ = auVar81._4_4_;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = auVar81._0_8_;
  auVar65 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar48 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar65 = auVar65 ^ ZEXT816(0xc200000000000000) << uVar1;
    }
  }
  auVar65 = auVar65 ^ auVar73;
  auVar74._0_8_ = auVar65._8_8_;
  auVar74._8_4_ = auVar65._0_4_;
  auVar74._12_4_ = auVar65._4_4_;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = auVar65._0_8_;
  auVar65 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar49 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar65 = auVar65 ^ ZEXT816(0xc200000000000000) << uVar1;
    }
  }
  auVar65 = auVar65 ^ auVar87 >> 0x40 ^ auVar84 ^ auVar74;
  param_1[4] = auVar65;
  auVar92._0_8_ = auVar65._8_8_;
  auVar92._8_4_ = auVar65._0_4_;
  auVar92._12_4_ = auVar65._4_4_;
  param_1[0xc] = auVar92 ^ auVar65;
  auVar93._8_4_ = auVar65._0_4_;
  auVar93._0_8_ = auVar92._0_8_;
  auVar93._12_4_ = auVar65._4_4_;
  auVar104._8_4_ = uVar63;
  auVar104._0_8_ = auVar83._0_8_;
  auVar104._12_4_ = uVar66;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = auVar65._0_8_;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar64;
  auVar81 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar9 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar81 = auVar81 ^ auVar22 << uVar1;
    }
  }
  auVar32._8_8_ = 0;
  auVar32._0_8_ = auVar92._0_8_;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = auVar83._0_8_;
  auVar84 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar32 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar84 = auVar84 ^ auVar39 << uVar1;
    }
  }
  auVar10._8_8_ = 0;
  auVar10._0_8_ = SUB168(auVar93 ^ auVar65,0);
  auVar23._8_8_ = 0;
  auVar23._0_8_ = SUB168(auVar104 ^ auVar82,0);
  auVar65 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar10 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar65 = auVar65 ^ auVar23 << uVar1;
    }
  }
  auVar87 = auVar65 ^ auVar84 ^ auVar81;
  auVar60._8_8_ = 0;
  auVar60._0_8_ = auVar87._0_8_;
  auVar81 = auVar81 ^ auVar60 << 0x40;
  auVar75._0_8_ = auVar81._8_8_;
  auVar75._8_4_ = auVar81._0_4_;
  auVar75._12_4_ = auVar81._4_4_;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = auVar81._0_8_;
  auVar65 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar50 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar65 = auVar65 ^ ZEXT816(0xc200000000000000) << uVar1;
    }
  }
  auVar65 = auVar65 ^ auVar75;
  auVar76._0_8_ = auVar65._8_8_;
  auVar76._8_4_ = auVar65._0_4_;
  auVar76._12_4_ = auVar65._4_4_;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = auVar65._0_8_;
  auVar65 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar51 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar65 = auVar65 ^ ZEXT816(0xc200000000000000) << uVar1;
    }
  }
  auVar65 = auVar65 ^ auVar87 >> 0x40 ^ auVar84 ^ auVar76;
  param_1[5] = auVar65;
  auVar94._0_8_ = auVar65._8_8_;
  auVar94._8_4_ = auVar65._0_4_;
  auVar94._12_4_ = auVar65._4_4_;
  param_1[0xd] = auVar94 ^ auVar65;
  auVar95._8_4_ = auVar65._0_4_;
  auVar95._0_8_ = auVar94._0_8_;
  auVar95._12_4_ = auVar65._4_4_;
  auVar105._8_4_ = uVar63;
  auVar105._0_8_ = auVar83._0_8_;
  auVar105._12_4_ = uVar66;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = auVar65._0_8_;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar64;
  auVar81 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar11 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar81 = auVar81 ^ auVar24 << uVar1;
    }
  }
  auVar33._8_8_ = 0;
  auVar33._0_8_ = auVar94._0_8_;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = auVar83._0_8_;
  auVar84 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar33 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar84 = auVar84 ^ auVar40 << uVar1;
    }
  }
  auVar12._8_8_ = 0;
  auVar12._0_8_ = SUB168(auVar95 ^ auVar65,0);
  auVar25._8_8_ = 0;
  auVar25._0_8_ = SUB168(auVar105 ^ auVar82,0);
  auVar65 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar12 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar65 = auVar65 ^ auVar25 << uVar1;
    }
  }
  auVar87 = auVar65 ^ auVar84 ^ auVar81;
  auVar61._8_8_ = 0;
  auVar61._0_8_ = auVar87._0_8_;
  auVar81 = auVar81 ^ auVar61 << 0x40;
  auVar77._0_8_ = auVar81._8_8_;
  auVar77._8_4_ = auVar81._0_4_;
  auVar77._12_4_ = auVar81._4_4_;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = auVar81._0_8_;
  auVar65 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar52 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar65 = auVar65 ^ ZEXT816(0xc200000000000000) << uVar1;
    }
  }
  auVar65 = auVar65 ^ auVar77;
  auVar78._0_8_ = auVar65._8_8_;
  auVar78._8_4_ = auVar65._0_4_;
  auVar78._12_4_ = auVar65._4_4_;
  auVar53._8_8_ = 0;
  auVar53._0_8_ = auVar65._0_8_;
  auVar65 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar53 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar65 = auVar65 ^ ZEXT816(0xc200000000000000) << uVar1;
    }
  }
  auVar65 = auVar65 ^ auVar87 >> 0x40 ^ auVar84 ^ auVar78;
  param_1[6] = auVar65;
  auVar96._0_8_ = auVar65._8_8_;
  auVar96._8_4_ = auVar65._0_4_;
  auVar96._12_4_ = auVar65._4_4_;
  param_1[0xe] = auVar96 ^ auVar65;
  auVar97._8_4_ = auVar65._0_4_;
  auVar97._0_8_ = auVar96._0_8_;
  auVar97._12_4_ = auVar65._4_4_;
  auVar106._8_4_ = uVar63;
  auVar106._0_8_ = auVar83._0_8_;
  auVar106._12_4_ = uVar66;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = auVar65._0_8_;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar64;
  auVar81 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar13 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar81 = auVar81 ^ auVar26 << uVar1;
    }
  }
  auVar34._8_8_ = 0;
  auVar34._0_8_ = auVar96._0_8_;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = auVar83._0_8_;
  auVar84 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar34 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar84 = auVar84 ^ auVar41 << uVar1;
    }
  }
  auVar14._8_8_ = 0;
  auVar14._0_8_ = SUB168(auVar97 ^ auVar65,0);
  auVar27._8_8_ = 0;
  auVar27._0_8_ = SUB168(auVar106 ^ auVar82,0);
  auVar65 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar14 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar65 = auVar65 ^ auVar27 << uVar1;
    }
  }
  auVar82 = auVar65 ^ auVar84 ^ auVar81;
  auVar62._8_8_ = 0;
  auVar62._0_8_ = auVar82._0_8_;
  auVar81 = auVar81 ^ auVar62 << 0x40;
  auVar79._0_8_ = auVar81._8_8_;
  auVar79._8_4_ = auVar81._0_4_;
  auVar79._12_4_ = auVar81._4_4_;
  auVar54._8_8_ = 0;
  auVar54._0_8_ = auVar81._0_8_;
  auVar65 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar54 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar65 = auVar65 ^ ZEXT816(0xc200000000000000) << uVar1;
    }
  }
  auVar65 = auVar65 ^ auVar79;
  auVar80._0_8_ = auVar65._8_8_;
  auVar80._8_4_ = auVar65._0_4_;
  auVar80._12_4_ = auVar65._4_4_;
  auVar55._8_8_ = 0;
  auVar55._0_8_ = auVar65._0_8_;
  auVar65 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar55 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar65 = auVar65 ^ ZEXT816(0xc200000000000000) << uVar1;
    }
  }
  auVar65 = auVar65 ^ auVar82 >> 0x40 ^ auVar84 ^ auVar80;
  param_1[7] = auVar65;
  auVar98._0_8_ = auVar65._8_8_;
  auVar98._8_4_ = auVar65._0_4_;
  auVar98._12_4_ = auVar65._4_4_;
  param_1[0xf] = auVar98 ^ auVar65;
  return;
}

