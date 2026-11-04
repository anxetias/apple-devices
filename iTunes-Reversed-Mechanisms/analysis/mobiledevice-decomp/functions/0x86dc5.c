// rea decompile_all
// name: _DecodeMetaBlockLength
// address: 0x86dc5
// body: available
// range: 0x86dc5-0x8730d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _DecodeMetaBlockLength(long param_1,ulong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  
  uVar2 = *(undefined4 *)(param_1 + 0x288);
  do {
    switch(uVar2) {
    case 0:
      iVar3 = (int)param_2[1];
      if (iVar3 == 0x40) {
        if (param_2[3] == 0) {
          return 2;
        }
        uVar7 = *param_2;
        *param_2 = uVar7 >> 8;
        uVar7 = (ulong)*(byte *)param_2[2] << 0x38 | uVar7 >> 8;
        *param_2 = uVar7;
        param_2[3] = param_2[3] - 1;
        param_2[2] = (ulong)((byte *)param_2[2] + 1);
        iVar3 = 0x38;
      }
      else {
        uVar7 = *param_2;
      }
      *(int *)(param_2 + 1) = iVar3 + 1;
      uVar4 = 1L << ((byte)iVar3 & 0x3f);
      *(undefined4 *)(param_1 + 0x108) = 0;
      *(ushort *)(param_1 + 0x298) =
           (ushort)*(undefined4 *)(param_1 + 0x298) & 0xfff8 | (ushort)((uVar7 & uVar4) != 0);
      if ((uVar7 & uVar4) != 0) {
        *(undefined4 *)(param_1 + 0x288) = 1;
        goto switchD_00086dee_caseD_1;
      }
      uVar2 = 2;
      goto LAB_00086f92;
    case 1:
switchD_00086dee_caseD_1:
      uVar7 = (ulong)(uint)param_2[1];
      if ((uint)param_2[1] == 0x40) {
        if (param_2[3] == 0) {
          return 2;
        }
        uVar7 = *param_2;
        *param_2 = uVar7 >> 8;
        uVar4 = (ulong)*(byte *)param_2[2] << 0x38 | uVar7 >> 8;
        *param_2 = uVar4;
        param_2[3] = param_2[3] - 1;
        param_2[2] = (ulong)((byte *)param_2[2] + 1);
        uVar7 = 0x38;
      }
      else {
        uVar4 = *param_2;
      }
      iVar3 = (int)uVar7 + 1;
      *(int *)(param_2 + 1) = iVar3;
      if ((uVar4 >> (uVar7 & 0x3f) & 1) != 0) goto LAB_000872e3;
      *(undefined4 *)(param_1 + 0x288) = 2;
      break;
    case 2:
      iVar3 = (int)param_2[1];
      break;
    case 3:
      goto switchD_00086dee_caseD_3;
    case 4:
      uVar8 = (uint)*(ushort *)(param_1 + 0x298);
      goto LAB_000870f0;
    case 5:
      uVar7 = (ulong)(uint)param_2[1];
      if ((uint)param_2[1] == 0x40) {
        if (param_2[3] == 0) {
          return 2;
        }
        uVar7 = *param_2;
        *param_2 = uVar7 >> 8;
        uVar4 = (ulong)*(byte *)param_2[2] << 0x38 | uVar7 >> 8;
        *param_2 = uVar4;
        param_2[3] = param_2[3] - 1;
        param_2[2] = (ulong)((byte *)param_2[2] + 1);
        uVar7 = 0x38;
      }
      else {
        uVar4 = *param_2;
      }
      iVar3 = (int)uVar7 + 1;
      *(int *)(param_2 + 1) = iVar3;
      if ((uVar4 >> (uVar7 & 0x3f) & 1) != 0) {
        return 0xfffffffe;
      }
      *(undefined4 *)(param_1 + 0x288) = 6;
      goto LAB_0008719a;
    case 6:
      iVar3 = (int)param_2[1];
LAB_0008719a:
      if (iVar3 - 0x3fU < 2) {
        if (param_2[3] == 0) {
          return 2;
        }
        uVar7 = *param_2;
        *param_2 = uVar7 >> 8;
        uVar7 = (ulong)*(byte *)param_2[2] << 0x38 | uVar7 >> 8;
        *param_2 = uVar7;
        iVar3 = iVar3 + -8;
        param_2[3] = param_2[3] - 1;
        param_2[2] = (ulong)((byte *)param_2[2] + 1);
      }
      else {
        uVar7 = *param_2;
      }
      uVar7 = uVar7 >> ((byte)iVar3 & 0x3f);
      *(int *)(param_2 + 1) = iVar3 + 2;
      if ((uVar7 & 3) == 0) goto LAB_000872e3;
      uVar8 = *(uint *)(param_1 + 0x298) & 0xffffc03f | ((uint)uVar7 & 3) << 6;
      *(short *)(param_1 + 0x298) = (short)uVar8;
      *(undefined4 *)(param_1 + 0x288) = 7;
LAB_00087215:
      uVar5 = *(uint *)(param_1 + 4);
      if ((int)(uVar8 >> 6 & 0xff) <= (int)uVar5) {
        uVar6 = *(uint *)(param_1 + 0x108);
        goto LAB_000872d9;
      }
      iVar1 = (int)param_2[1];
      iVar3 = uVar5 * 8;
      goto LAB_00087239;
    case 7:
      uVar8 = (uint)*(ushort *)(param_1 + 0x298);
      goto LAB_00087215;
    default:
      return 0xffffffe1;
    }
    if (iVar3 - 0x3fU < 2) {
      if (param_2[3] == 0) {
        return 2;
      }
      uVar7 = *param_2;
      *param_2 = uVar7 >> 8;
      uVar7 = (ulong)*(byte *)param_2[2] << 0x38 | uVar7 >> 8;
      *param_2 = uVar7;
      iVar3 = iVar3 + -8;
      param_2[3] = param_2[3] - 1;
      param_2[2] = (ulong)((byte *)param_2[2] + 1);
    }
    else {
      uVar7 = *param_2;
    }
    uVar5 = (uint)(uVar7 >> ((byte)iVar3 & 0x3f)) & 3;
    *(int *)(param_2 + 1) = iVar3 + 2;
    uVar6 = *(uint *)(param_1 + 0x298) & 0xffffc03f;
    uVar8 = uVar5 * 0x40 + uVar6 + 0x100;
    *(short *)(param_1 + 0x298) = (short)uVar8;
    *(undefined4 *)(param_1 + 4) = 0;
    if (uVar5 != 3) {
      *(undefined4 *)(param_1 + 0x288) = 3;
      uVar5 = 0;
      goto LAB_00087031;
    }
    *(ushort *)(param_1 + 0x298) = (ushort)uVar6 | 0x1c4;
    uVar2 = 5;
LAB_00086f92:
    *(undefined4 *)(param_1 + 0x288) = uVar2;
  } while( true );
  while( true ) {
    uVar7 = uVar7 >> ((byte)iVar1 & 0x3f);
    iVar1 = iVar1 + 8;
    *(int *)(param_2 + 1) = iVar1;
    uVar5 = uVar5 + 1;
    uVar8 = *(uint *)(param_1 + 0x298) >> 6 & 0xff;
    if (((uVar5 == uVar8) && (1 < (ushort)uVar8)) && ((uVar7 & 0xff) == 0)) {
      return 0xfffffffd;
    }
    uVar6 = ((uint)uVar7 & 0xff) << ((byte)iVar3 & 0x1f) | *(uint *)(param_1 + 0x108);
    *(uint *)(param_1 + 0x108) = uVar6;
    iVar3 = iVar3 + 8;
    if ((int)uVar8 <= (int)uVar5) break;
LAB_00087239:
    if (iVar1 - 0x39U < 8) {
      if (param_2[3] == 0) goto LAB_000872f4;
      uVar7 = *param_2;
      *param_2 = uVar7 >> 8;
      uVar7 = (ulong)*(byte *)param_2[2] << 0x38 | uVar7 >> 8;
      *param_2 = uVar7;
      iVar1 = iVar1 + -8;
      param_2[3] = param_2[3] - 1;
      param_2[2] = (ulong)((byte *)param_2[2] + 1);
    }
    else {
      uVar7 = *param_2;
    }
  }
LAB_000872d9:
  *(uint *)(param_1 + 0x108) = uVar6 + 1;
  goto LAB_000872e3;
switchD_00086dee_caseD_3:
  uVar5 = *(uint *)(param_1 + 4);
  uVar8 = (uint)*(ushort *)(param_1 + 0x298);
LAB_00087031:
  if ((int)uVar5 < (int)(uVar8 >> 6 & 0xff)) {
    iVar1 = (int)param_2[1];
    iVar3 = uVar5 * 4;
    do {
      if (iVar1 - 0x3dU < 4) {
        if (param_2[3] == 0) {
LAB_000872f4:
          *(uint *)(param_1 + 4) = uVar5;
          return 2;
        }
        uVar7 = *param_2;
        *param_2 = uVar7 >> 8;
        uVar7 = (ulong)*(byte *)param_2[2] << 0x38 | uVar7 >> 8;
        *param_2 = uVar7;
        iVar1 = iVar1 + -8;
        param_2[3] = param_2[3] - 1;
        param_2[2] = (ulong)((byte *)param_2[2] + 1);
      }
      else {
        uVar7 = *param_2;
      }
      uVar7 = uVar7 >> ((byte)iVar1 & 0x3f);
      iVar1 = iVar1 + 4;
      *(int *)(param_2 + 1) = iVar1;
      uVar5 = uVar5 + 1;
      uVar8 = *(uint *)(param_1 + 0x298);
      uVar6 = uVar8 >> 6 & 0xff;
      if (((uVar5 == uVar6) && (4 < (ushort)uVar6)) && ((uVar7 & 0xf) == 0)) {
        return 0xffffffff;
      }
      *(uint *)(param_1 + 0x108) =
           *(uint *)(param_1 + 0x108) | ((uint)uVar7 & 0xf) << ((byte)iVar3 & 0x1f);
      iVar3 = iVar3 + 4;
    } while ((int)uVar5 < (int)uVar6);
  }
  *(undefined4 *)(param_1 + 0x288) = 4;
LAB_000870f0:
  if ((uVar8 & 1) == 0) {
    uVar7 = (ulong)(uint)param_2[1];
    if ((uint)param_2[1] == 0x40) {
      if (param_2[3] == 0) {
        return 2;
      }
      uVar7 = *param_2;
      *param_2 = uVar7 >> 8;
      uVar4 = (ulong)*(byte *)param_2[2] << 0x38 | uVar7 >> 8;
      *param_2 = uVar4;
      param_2[3] = param_2[3] - 1;
      param_2[2] = (ulong)((byte *)param_2[2] + 1);
      uVar7 = 0x38;
    }
    else {
      uVar4 = *param_2;
    }
    *(int *)(param_2 + 1) = (int)uVar7 + 1;
    *(ushort *)(param_1 + 0x298) =
         ((ushort)*(undefined4 *)(param_1 + 0x298) & 0xfffd) +
         (ushort)((uVar4 >> (uVar7 & 0x3f) & 1) != 0) * 2;
  }
  *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
LAB_000872e3:
  *(undefined4 *)(param_1 + 0x288) = 0;
  return 1;
}

