// rea decompile_all
// name: _vng_aes_encrypt_aesni_cbc
// address: 0x2a100
// body: available
// range: 0x2a100-0x2a385 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_vng_aes_encrypt_aesni_cbc
          (undefined1 (*param_1) [16],undefined1 (*param_2) [16],int param_3,
          undefined1 (*param_4) [16],undefined1 (*param_5) [16])

{
  undefined1 auVar1 [16];
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
  bool bVar15;
  int iVar16;
  undefined1 auVar17 [16];
  
  auVar17 = *param_2;
  iVar16 = *(int *)param_5[0xf];
  if (iVar16 == 0xa0) {
    if (0 < param_3) {
      auVar1 = *param_5;
      auVar2 = param_5[1];
      auVar3 = param_5[2];
      auVar4 = param_5[3];
      auVar5 = param_5[4];
      auVar6 = param_5[5];
      auVar7 = param_5[6];
      auVar8 = param_5[7];
      auVar9 = param_5[8];
      auVar10 = param_5[9];
      auVar11 = param_5[10];
      do {
        auVar17 = aesenc(auVar17 ^ auVar1 ^ *param_1,auVar2);
        auVar17 = aesenc(auVar17,auVar3);
        auVar17 = aesenc(auVar17,auVar4);
        auVar17 = aesenc(auVar17,auVar5);
        auVar17 = aesenc(auVar17,auVar6);
        auVar17 = aesenc(auVar17,auVar7);
        auVar17 = aesenc(auVar17,auVar8);
        auVar17 = aesenc(auVar17,auVar9);
        auVar17 = aesenc(auVar17,auVar10);
        auVar17 = aesenclast(auVar17,auVar11);
        *param_4 = auVar17;
        param_4 = param_4 + 1;
        param_1 = param_1 + 1;
        iVar16 = param_3 + -1;
        bVar15 = 0 < param_3;
        param_3 = iVar16;
      } while (iVar16 != 0 && bVar15);
    }
  }
  else if (iVar16 == 0xc0) {
    if (0 < param_3) {
      auVar1 = *param_5;
      auVar2 = param_5[1];
      auVar3 = param_5[2];
      auVar4 = param_5[3];
      auVar5 = param_5[4];
      auVar6 = param_5[5];
      auVar7 = param_5[6];
      auVar8 = param_5[7];
      auVar9 = param_5[8];
      auVar10 = param_5[9];
      auVar11 = param_5[10];
      auVar12 = param_5[0xb];
      auVar13 = param_5[0xc];
      do {
        auVar17 = aesenc(auVar17 ^ *param_1 ^ auVar1,auVar2);
        auVar17 = aesenc(auVar17,auVar3);
        auVar17 = aesenc(auVar17,auVar4);
        auVar17 = aesenc(auVar17,auVar5);
        auVar17 = aesenc(auVar17,auVar6);
        auVar17 = aesenc(auVar17,auVar7);
        auVar17 = aesenc(auVar17,auVar8);
        auVar17 = aesenc(auVar17,auVar9);
        auVar17 = aesenc(auVar17,auVar10);
        auVar17 = aesenc(auVar17,auVar11);
        auVar17 = aesenc(auVar17,auVar12);
        auVar17 = aesenclast(auVar17,auVar13);
        *param_4 = auVar17;
        param_1 = param_1 + 1;
        param_4 = param_4 + 1;
        iVar16 = param_3 + -1;
        bVar15 = 0 < param_3;
        param_3 = iVar16;
      } while (iVar16 != 0 && bVar15);
    }
  }
  else {
    if (iVar16 != 0xe0) {
      return 0xffffffff;
    }
    if (0 < param_3) {
      auVar1 = *param_5;
      auVar2 = param_5[1];
      auVar3 = param_5[2];
      auVar4 = param_5[3];
      auVar5 = param_5[4];
      auVar6 = param_5[5];
      auVar7 = param_5[6];
      auVar8 = param_5[7];
      auVar9 = param_5[8];
      auVar10 = param_5[9];
      auVar11 = param_5[10];
      auVar12 = param_5[0xb];
      auVar13 = param_5[0xc];
      auVar14 = param_5[0xd];
      do {
        auVar17 = aesenc(auVar17 ^ *param_1 ^ auVar1,auVar2);
        auVar17 = aesenc(auVar17,auVar3);
        auVar17 = aesenc(auVar17,auVar4);
        auVar17 = aesenc(auVar17,auVar5);
        auVar17 = aesenc(auVar17,auVar6);
        auVar17 = aesenc(auVar17,auVar7);
        auVar17 = aesenc(auVar17,auVar8);
        auVar17 = aesenc(auVar17,auVar9);
        auVar17 = aesenc(auVar17,auVar10);
        auVar17 = aesenc(auVar17,auVar11);
        auVar17 = aesenc(auVar17,auVar12);
        auVar17 = aesenc(auVar17,auVar13);
        auVar17 = aesenc(auVar17,auVar14);
        auVar17 = aesenclast(auVar17,param_5[0xe]);
        *param_4 = auVar17;
        param_1 = param_1 + 1;
        param_4 = param_4 + 1;
        iVar16 = param_3 + -1;
        bVar15 = 0 < param_3;
        param_3 = iVar16;
      } while (iVar16 != 0 && bVar15);
    }
  }
  *param_2 = auVar17;
  return 0;
}

