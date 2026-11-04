// rea decompile_all
// name: __DEREncoderAddEncodedData
// address: 0x241bf4
// body: available
// range: 0x241bf4-0x241d38 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __DEREncoderAddEncodedData(undefined8 *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar12 = 1;
joined_r0x00241d0a:
    while (param_2 != (long *)0x0) {
      plVar6 = (long *)*param_2;
      __EncodedDataRelease(param_2);
      param_2 = plVar6;
    }
    return uVar12;
  }
  if (param_2 == (long *)0x0) {
    return 2;
  }
  uVar11 = *(uint *)(param_1 + 1);
  uVar12 = 2;
  plVar6 = param_2;
  do {
    uVar10 = uVar11 + *(uint *)((long)plVar6 + 0x14);
    if ((CARRY4(uVar11,*(uint *)((long)plVar6 + 0x14))) ||
       (uVar11 = uVar10 + *(uint *)(plVar6 + 3), CARRY4(uVar10,*(uint *)(plVar6 + 3))))
    goto joined_r0x00241d0a;
    plVar6 = (long *)*plVar6;
  } while (plVar6 != (long *)0x0);
  puVar14 = param_1;
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    iVar1 = *(int *)((long)param_1 + 0xc);
    puVar5 = (undefined8 *)*param_1;
    puVar13 = param_1;
LAB_00241c5f:
    puVar14 = puVar5;
    if (iVar1 != 0) {
      uVar9 = *(ulong *)((long)param_2 + 0x1c);
      uVar7 = uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 | (uVar9 & 0xff0000000000) >> 0x18
              | (uVar9 & 0xff00000000) >> 8 | (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18
              | (uVar9 & 0xff00) << 0x28 | uVar9 << 0x38;
      uVar9 = *(ulong *)((long)puVar14 + 0x1c);
      uVar9 = uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 | (uVar9 & 0xff0000000000) >> 0x18
              | (uVar9 & 0xff00000000) >> 8 | (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18
              | (uVar9 & 0xff00) << 0x28 | uVar9 << 0x38;
      if (uVar7 == uVar9) {
        uVar9 = *(ulong *)((long)param_2 + 0x24);
        uVar4 = *(ulong *)((long)puVar14 + 0x24);
        uVar7 = uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 |
                (uVar9 & 0xff0000000000) >> 0x18 | (uVar9 & 0xff00000000) >> 8 |
                (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 | (uVar9 & 0xff00) << 0x28 |
                uVar9 << 0x38;
        uVar9 = uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 |
                (uVar4 & 0xff0000000000) >> 0x18 | (uVar4 & 0xff00000000) >> 8 |
                (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 | (uVar4 & 0xff00) << 0x28 |
                uVar4 << 0x38;
        uVar10 = 0;
        if (uVar7 != uVar9) goto LAB_00241c91;
      }
      else {
LAB_00241c91:
        uVar10 = -(uint)(uVar7 < uVar9) | 1;
      }
      if (uVar10 == 0) {
        uVar2 = *(uint *)(param_2 + 3);
        uVar3 = *(uint *)(puVar14 + 3);
        uVar10 = uVar3;
        if (uVar2 < uVar3) {
          uVar10 = uVar2;
        }
        uVar10 = _memcmp((void *)param_2[1],(void *)puVar14[1],(ulong)uVar10);
        if (uVar10 == 0) {
          plVar6 = param_2;
          if (uVar3 <= uVar2) goto LAB_00241cd1;
LAB_00241ce4:
          do {
            plVar8 = plVar6;
            plVar6 = (long *)*plVar8;
          } while (plVar6 != (long *)0x0);
          *plVar8 = (long)puVar14;
          puVar14 = puVar13;
          goto LAB_00241cf5;
        }
      }
      plVar6 = param_2;
      if ((int)uVar10 < 0) goto LAB_00241ce4;
    }
LAB_00241cd1:
    puVar5 = (undefined8 *)*puVar14;
    puVar13 = puVar14;
    if ((undefined8 *)*puVar14 == (undefined8 *)0x0) goto LAB_00241cf5;
    goto LAB_00241c5f;
  }
LAB_00241cf5:
  *puVar14 = param_2;
  *(uint *)(param_1 + 1) = uVar11;
  return 0;
}

