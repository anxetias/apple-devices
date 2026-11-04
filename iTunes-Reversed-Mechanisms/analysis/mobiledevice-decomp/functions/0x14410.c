// rea decompile_all
// name: _gcm_ghash
// address: 0x14410
// body: available
// range: 0x14410-0x1442b inclusive
// range: 0x14440-0x1470b inclusive
// range: 0x14740-0x147f0 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001479d) */
/* WARNING: Removing unreachable block (ram,0x00014774) */
/* WARNING: Removing unreachable block (ram,0x00014751) */
/* WARNING: Removing unreachable block (ram,0x000146f1) */
/* WARNING: Removing unreachable block (ram,0x000146ea) */
/* WARNING: Removing unreachable block (ram,0x000146e3) */
/* WARNING: Removing unreachable block (ram,0x000144a2) */
/* WARNING: Removing unreachable block (ram,0x00014629) */
/* WARNING: Removing unreachable block (ram,0x00014637) */
/* WARNING: Removing unreachable block (ram,0x00014494) */
/* WARNING: Removing unreachable block (ram,0x0001456b) */
/* WARNING: Removing unreachable block (ram,0x0001446b) */
/* WARNING: Removing unreachable block (ram,0x000145ea) */
/* WARNING: Removing unreachable block (ram,0x00014564) */
/* WARNING: Removing unreachable block (ram,0x000144de) */
/* WARNING: Removing unreachable block (ram,0x00014465) */
/* WARNING: Removing unreachable block (ram,0x000145ae) */
/* WARNING: Removing unreachable block (ram,0x000145a0) */
/* WARNING: Removing unreachable block (ram,0x00014528) */
/* WARNING: Removing unreachable block (ram,0x0001451a) */
/* WARNING: Removing unreachable block (ram,0x0001445f) */
/* WARNING: Removing unreachable block (ram,0x0001449b) */
/* WARNING: Removing unreachable block (ram,0x000144d7) */
/* WARNING: Removing unreachable block (ram,0x000144e5) */
/* WARNING: Removing unreachable block (ram,0x00014521) */
/* WARNING: Removing unreachable block (ram,0x0001455d) */
/* WARNING: Removing unreachable block (ram,0x000145a7) */
/* WARNING: Removing unreachable block (ram,0x000145e3) */
/* WARNING: Removing unreachable block (ram,0x000145f1) */
/* WARNING: Removing unreachable block (ram,0x00014630) */
/* WARNING: Removing unreachable block (ram,0x0001465d) */
/* WARNING: Removing unreachable block (ram,0x00014760) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _gcm_ghash(undefined1 (*param_1) [16],ulong *param_2,undefined1 (*param_3) [16],long param_4)

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
  ulong uVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  ulong uVar66;
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
  
  auVar61 = pshufb(*param_1,_DAT_00014800);
  while (0x7f < param_4) {
    auVar67 = pshufb(param_3[7],_DAT_00014800);
    auVar76._8_8_ = 0;
    auVar76._0_8_ = auVar67._0_8_;
    auVar77._8_8_ = 0;
    auVar77._0_8_ = *param_2;
    auVar75 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar76 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar75 = auVar75 ^ auVar77 << uVar1;
      }
    }
    auVar68._8_8_ = 0;
    auVar68._0_8_ = auVar67._8_8_;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = param_2[1];
    auVar76 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar68 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar76 = auVar76 ^ auVar30 << uVar1;
      }
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = auVar67._8_8_ ^ auVar67._0_8_;
    auVar67._8_8_ = 0;
    auVar67._0_8_ = param_2[0x10];
    auVar77 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar6 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar77 = auVar77 ^ auVar67 << uVar1;
      }
    }
    auVar68 = pshufb(param_3[6],_DAT_00014800);
    auVar69._8_8_ = 0;
    auVar69._0_8_ = auVar68._0_8_;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = param_2[2];
    auVar67 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar69 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar67 = auVar67 ^ auVar31 << uVar1;
      }
    }
    auVar7._8_8_ = 0;
    auVar7._0_8_ = auVar68._8_8_;
    auVar70._8_8_ = 0;
    auVar70._0_8_ = param_2[3];
    auVar30 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar7 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar30 = auVar30 ^ auVar70 << uVar1;
      }
    }
    auVar8._8_8_ = 0;
    auVar8._0_8_ = auVar68._8_8_ ^ auVar68._0_8_;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = param_2[0x12];
    auVar68 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar8 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar68 = auVar68 ^ auVar32 << uVar1;
      }
    }
    auVar69 = pshufb(param_3[5],_DAT_00014800);
    auVar71._8_8_ = 0;
    auVar71._0_8_ = auVar69._0_8_;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = param_2[4];
    auVar6 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar71 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar6 = auVar6 ^ auVar33 << uVar1;
      }
    }
    auVar9._8_8_ = 0;
    auVar9._0_8_ = auVar69._8_8_;
    auVar72._8_8_ = 0;
    auVar72._0_8_ = param_2[5];
    auVar31 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar9 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar31 = auVar31 ^ auVar72 << uVar1;
      }
    }
    auVar10._8_8_ = 0;
    auVar10._0_8_ = auVar69._8_8_ ^ auVar69._0_8_;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = param_2[0x14];
    auVar69 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar10 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar69 = auVar69 ^ auVar34 << uVar1;
      }
    }
    auVar70 = pshufb(param_3[4],_DAT_00014800);
    auVar73._8_8_ = 0;
    auVar73._0_8_ = auVar70._0_8_;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = param_2[6];
    auVar7 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar73 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar7 = auVar7 ^ auVar35 << uVar1;
      }
    }
    auVar74._8_8_ = 0;
    auVar74._0_8_ = auVar70._8_8_;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = param_2[7];
    auVar8 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar74 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar8 = auVar8 ^ auVar36 << uVar1;
      }
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = auVar70._8_8_ ^ auVar70._0_8_;
    auVar37._8_8_ = 0;
    auVar37._0_8_ = param_2[0x16];
    auVar70 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar11 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar70 = auVar70 ^ auVar37 << uVar1;
      }
    }
    auVar71 = pshufb(param_3[3],_DAT_00014800);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = auVar71._0_8_;
    auVar38._8_8_ = 0;
    auVar38._0_8_ = param_2[8];
    auVar32 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar12 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar32 = auVar32 ^ auVar38 << uVar1;
      }
    }
    auVar13._8_8_ = 0;
    auVar13._0_8_ = auVar71._8_8_;
    auVar39._8_8_ = 0;
    auVar39._0_8_ = param_2[9];
    auVar33 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar13 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar33 = auVar33 ^ auVar39 << uVar1;
      }
    }
    auVar14._8_8_ = 0;
    auVar14._0_8_ = auVar71._8_8_ ^ auVar71._0_8_;
    auVar40._8_8_ = 0;
    auVar40._0_8_ = param_2[0x18];
    auVar71 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar14 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar71 = auVar71 ^ auVar40 << uVar1;
      }
    }
    auVar72 = pshufb(param_3[2],_DAT_00014800);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = auVar72._0_8_;
    auVar41._8_8_ = 0;
    auVar41._0_8_ = param_2[10];
    auVar9 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar15 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar9 = auVar9 ^ auVar41 << uVar1;
      }
    }
    auVar16._8_8_ = 0;
    auVar16._0_8_ = auVar72._8_8_;
    auVar42._8_8_ = 0;
    auVar42._0_8_ = param_2[0xb];
    auVar10 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar16 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar10 = auVar10 ^ auVar42 << uVar1;
      }
    }
    auVar17._8_8_ = 0;
    auVar17._0_8_ = auVar72._8_8_ ^ auVar72._0_8_;
    auVar43._8_8_ = 0;
    auVar43._0_8_ = param_2[0x1a];
    auVar72 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar17 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar72 = auVar72 ^ auVar43 << uVar1;
      }
    }
    auVar73 = pshufb(param_3[1],_DAT_00014800);
    auVar18._8_8_ = 0;
    auVar18._0_8_ = auVar73._0_8_;
    auVar44._8_8_ = 0;
    auVar44._0_8_ = param_2[0xc];
    auVar34 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar18 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar34 = auVar34 ^ auVar44 << uVar1;
      }
    }
    auVar19._8_8_ = 0;
    auVar19._0_8_ = auVar73._8_8_;
    auVar45._8_8_ = 0;
    auVar45._0_8_ = param_2[0xd];
    auVar35 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar19 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar35 = auVar35 ^ auVar45 << uVar1;
      }
    }
    auVar20._8_8_ = 0;
    auVar20._0_8_ = auVar73._8_8_ ^ auVar73._0_8_;
    auVar46._8_8_ = 0;
    auVar46._0_8_ = param_2[0x1c];
    auVar73 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar20 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar73 = auVar73 ^ auVar46 << uVar1;
      }
    }
    auVar74 = pshufb(*param_3,_DAT_00014800);
    uVar66 = SUB168(auVar74 ^ auVar61,8);
    uVar57 = SUB168(auVar74 ^ auVar61,0);
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar57;
    auVar47._8_8_ = 0;
    auVar47._0_8_ = param_2[0xe];
    auVar61 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar21 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar61 = auVar61 ^ auVar47 << uVar1;
      }
    }
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar66;
    auVar48._8_8_ = 0;
    auVar48._0_8_ = param_2[0xf];
    auVar74 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar22 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar74 = auVar74 ^ auVar48 << uVar1;
      }
    }
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar66 ^ uVar57;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = param_2[0x1e];
    auVar36 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar23 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar36 = auVar36 ^ auVar49 << uVar1;
      }
    }
    auVar61 = auVar75 ^ auVar67 ^ auVar6 ^ auVar7 ^ auVar32 ^ auVar9 ^ auVar34 ^ auVar61;
    auVar74 = auVar76 ^ auVar30 ^ auVar31 ^ auVar8 ^ auVar33 ^ auVar10 ^ auVar35 ^ auVar74;
    auVar76 = auVar77 ^ auVar68 ^ auVar69 ^ auVar70 ^ auVar71 ^ auVar72 ^ auVar73 ^ auVar36 ^
              auVar61 ^ auVar74;
    auVar75._8_8_ = 0;
    auVar75._0_8_ = auVar76._0_8_;
    auVar61 = auVar75 << 0x40 ^ auVar61;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = auVar61._0_8_;
    auVar75 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((ZEXT816(0xc200000000000000) & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar75 = auVar75 ^ auVar2 << uVar1;
      }
    }
    auVar62._0_8_ = auVar61._8_8_;
    auVar62._8_4_ = auVar61._0_4_;
    auVar62._12_4_ = auVar61._4_4_;
    auVar62 = auVar62 ^ auVar75;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = auVar62._0_8_;
    auVar61 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((ZEXT816(0xc200000000000000) & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar61 = auVar61 ^ auVar3 << uVar1;
      }
    }
    auVar63._0_8_ = auVar62._8_8_;
    auVar63._8_4_ = auVar62._0_4_;
    auVar63._12_4_ = auVar62._4_4_;
    auVar61 = auVar63 ^ auVar61 ^ auVar76 >> 0x40 ^ auVar74;
    param_3 = param_3 + 8;
    param_4 = param_4 + -0x80;
  }
  if (-0x71 < param_4 + -0x80) {
    auVar75 = pshufb(*param_3,_DAT_00014800);
    uVar66 = SUB168(auVar75 ^ auVar61,8);
    uVar57 = SUB168(auVar75 ^ auVar61,0);
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar57;
    auVar50._8_8_ = 0;
    auVar50._0_8_ = *(ulong *)((long)param_2 + param_4 + -0x10);
    auVar61 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar24 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar61 = auVar61 ^ auVar50 << uVar1;
      }
    }
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar66;
    auVar51._8_8_ = 0;
    auVar51._0_8_ = *(ulong *)((long)param_2 + param_4 + -8);
    auVar75 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar25 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar75 = auVar75 ^ auVar51 << uVar1;
      }
    }
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar66 ^ uVar57;
    auVar52._8_8_ = 0;
    auVar52._0_8_ = *(ulong *)((long)param_2 + param_4 + 0x70);
    auVar76 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((auVar26 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar76 = auVar76 ^ auVar52 << uVar1;
      }
    }
    lVar59 = param_4 + -0x20;
    lVar60 = param_4 + -0x10;
    while (lVar58 = lVar59, 0xf < lVar60) {
      param_3 = param_3 + 1;
      auVar67 = pshufb(*param_3,_DAT_00014800);
      auVar27._8_8_ = 0;
      auVar27._0_8_ = auVar67._0_8_;
      auVar53._8_8_ = 0;
      auVar53._0_8_ = *(ulong *)((long)param_2 + lVar58);
      auVar77 = (undefined1  [16])0x0;
      for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
        if ((auVar27 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
          auVar77 = auVar77 ^ auVar53 << uVar1;
        }
      }
      auVar61 = auVar61 ^ auVar77;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = auVar67._8_8_;
      auVar54._8_8_ = 0;
      auVar54._0_8_ = *(ulong *)((long)param_2 + lVar58 + 8);
      auVar77 = (undefined1  [16])0x0;
      for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
        if ((auVar28 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
          auVar77 = auVar77 ^ auVar54 << uVar1;
        }
      }
      auVar75 = auVar75 ^ auVar77;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = auVar67._8_8_ ^ auVar67._0_8_;
      auVar55._8_8_ = 0;
      auVar55._0_8_ = *(ulong *)((long)param_2 + lVar58 + 0x80);
      auVar77 = (undefined1  [16])0x0;
      for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
        if ((auVar29 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
          auVar77 = auVar77 ^ auVar55 << uVar1;
        }
      }
      auVar76 = auVar76 ^ auVar77;
      lVar59 = lVar58 + -0x10;
      lVar60 = lVar58;
    }
    auVar77 = auVar76 ^ auVar61 ^ auVar75;
    auVar56._8_8_ = 0;
    auVar56._0_8_ = auVar77._0_8_;
    auVar61 = auVar56 << 0x40 ^ auVar61;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = auVar61._0_8_;
    auVar76 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((ZEXT816(0xc200000000000000) & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar76 = auVar76 ^ auVar4 << uVar1;
      }
    }
    auVar64._0_8_ = auVar61._8_8_;
    auVar64._8_4_ = auVar61._0_4_;
    auVar64._12_4_ = auVar61._4_4_;
    auVar64 = auVar64 ^ auVar76;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = auVar64._0_8_;
    auVar61 = (undefined1  [16])0x0;
    for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
      if ((ZEXT816(0xc200000000000000) & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
        auVar61 = auVar61 ^ auVar5 << uVar1;
      }
    }
    auVar65._0_8_ = auVar64._8_8_;
    auVar65._8_4_ = auVar64._0_4_;
    auVar65._12_4_ = auVar64._4_4_;
    auVar61 = auVar65 ^ auVar61 ^ auVar77 >> 0x40 ^ auVar75;
  }
  auVar61 = pshufb(auVar61,_DAT_00014800);
  *param_1 = auVar61;
  return;
}

