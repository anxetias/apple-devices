// rea decompile_all
// name: _FWImageCreateImageBuffer
// address: 0x27043c
// body: available
// range: 0x27043c-0x2705cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _FWImageCreateImageBuffer(int *param_1,undefined8 *param_2,uint *param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  undefined1 in_XMM0 [16];
  undefined1 auVar7 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar8 [16];
  undefined8 uStack_50;
  
  uStack_50 = 0x1e;
  if (((param_1 != (int *)0x0) && (param_2 != (undefined8 *)0x0)) && (param_3 != (uint *)0x0)) {
    lVar2 = 0;
    do {
      if (param_1[lVar2 + 4] != param_1[lVar2]) {
        return 0x31;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 != 4);
    auVar7 = pmovzxdq(in_XMM0,*(undefined8 *)(param_1 + 2));
    auVar8 = pmovzxdq(in_XMM1,*(undefined8 *)param_1);
    uVar5 = auVar8._8_8_ + auVar7._8_8_ + auVar8._0_8_ + auVar7._0_8_ + 0x40;
    uStack_50 = 0;
    uVar4 = (uint)uVar5;
    if (uVar5 >> 0x20 == 0) {
      puVar3 = (undefined4 *)_uarpZalloc(uVar5);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0xffffffff;
        puVar3[1] = 0xffffffff;
        puVar3[2] = 0xffffffff;
        puVar3[3] = 0xffffffff;
        puVar3[0xc] = 0xffffffff;
        puVar3[0xd] = 0xffffffff;
        puVar3[0xe] = 0xffffffff;
        puVar3[0xf] = 0xffffffff;
        puVar3[8] = 0xffffffff;
        puVar3[9] = 0xffffffff;
        puVar3[10] = 0xffffffff;
        puVar3[0xb] = 0xffffffff;
        puVar3[4] = 0xffffffff;
        puVar3[5] = 0xffffffff;
        puVar3[6] = 0xffffffff;
        puVar3[7] = 0xffffffff;
        *puVar3 = 0xace00003;
        puVar3[1] = param_1[0x10];
        *(undefined8 *)(puVar3 + 2) = 0x4000002800;
        puVar3[4] = *param_1;
        puVar3[5] = param_1[1];
        puVar3[6] = *param_1 + param_1[1] + 0x40;
        puVar3[7] = param_1[3] + param_1[2];
        puVar3[8] = uVar4 - 0x40;
        uVar5 = 0x40;
        lVar2 = 0;
        do {
          _memcpy((void *)(uVar5 + (long)puVar3),*(void **)(param_1 + lVar2 * 2 + 8),
                  (ulong)(uint)param_1[lVar2]);
          uVar6 = (int)uVar5 + param_1[lVar2];
          uVar5 = (ulong)uVar6;
          lVar2 = lVar2 + 1;
        } while (lVar2 != 4);
        if (uVar6 == uVar4) {
          uVar1 = _CRCBuffer(puVar3 + 0x10,uVar4 - 0x40,0xffffffffffffffff);
          puVar3[9] = uVar1;
          *param_2 = puVar3;
          *param_3 = uVar4;
          uStack_50 = 0;
        }
        else {
          _image3Free(puVar3);
          uStack_50 = 0x27;
        }
      }
    }
    else {
      uStack_50 = 0x36;
    }
  }
  return uStack_50;
}

