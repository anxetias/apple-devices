// rea decompile_all
// name: _uarpApplePlatformEndpointRecvMessage
// address: 0x185597
// body: available
// range: 0x185597-0x185f19 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
_uarpApplePlatformEndpointRecvMessage
          (long param_1,int *param_2,long param_3,short param_4,undefined4 *param_5,uint param_6)

{
  long lVar1;
  long lVar2;
  short sVar3;
  char cVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int local_34;
  
  if ((param_5 == (undefined4 *)0x0 || param_3 == 0) || (param_2 == (int *)0x0 || param_1 == 0)) {
    return 0x1e;
  }
  __uarpOuiAppleGenericFeatures_myOui = 0x9bc;
  DAT_004a4d52 = 99;
  cVar4 = _uarpOuiCompare(param_3,&_uarpOuiAppleGenericFeatures_myOui);
  if (cVar4 == '\0') {
    return 9;
  }
  if (param_4 != 0x21) {
    if (param_4 != 0x20) {
      return 9;
    }
    if (param_6 < 4) {
      return 9;
    }
    iVar15 = *param_2;
    lVar10 = _uarpAllocPrepareTransmitBuffer2(param_1,param_2,0xffff,iVar15,0);
    if (lVar10 == 0) {
      return 0xb;
    }
    lVar1 = *(long *)(lVar10 + 0x10);
    __uarpOuiAppleGenericFeatures_myOui = 0x9bc;
    DAT_004a4d52 = 99;
    *(undefined1 *)(lVar1 + 8) = 99;
    *(undefined2 *)(lVar1 + 6) = 0x9bc;
    uVar5 = _uarpNtohs(0x21);
    *(undefined2 *)(lVar1 + 9) = uVar5;
    lVar2 = *(long *)(param_1 + 0x28);
    local_34 = 0;
    iVar6 = _uarpNtohl(*param_5);
    uVar9 = 0x1a;
    if (0x1c < iVar6 - 1U) goto LAB_00185bdf;
    puVar13 = (undefined8 *)(lVar1 + 0x17);
    iVar15 = iVar15 + -0x17;
    switch(iVar6) {
    case 1:
      pcVar12 = *(code **)(lVar2 + 8);
      if (pcVar12 == (code *)0x0) goto LAB_00185bdf;
      uVar11 = *(undefined8 *)(param_1 + 0x220);
      uVar14 = 1;
      break;
    case 2:
      pcVar12 = *(code **)(lVar2 + 0x18);
      if (pcVar12 == (code *)0x0) goto LAB_00185bdf;
      uVar11 = *(undefined8 *)(param_1 + 0x220);
      uVar14 = 2;
      break;
    case 3:
      pcVar12 = *(code **)(lVar2 + 0x28);
      if (pcVar12 == (code *)0x0) goto LAB_00185bdf;
      uVar11 = *(undefined8 *)(param_1 + 0x220);
      uVar14 = 3;
      break;
    case 4:
      if ((*(code **)(lVar2 + 0x38) == (code *)0x0) ||
         (uVar9 = (**(code **)(lVar2 + 0x38))
                            (*(undefined8 *)(param_1 + 0x220),4,puVar13,iVar15,&local_34),
         *(ushort *)(param_2 + 0xc) < 4)) goto LAB_00185bdf;
      if (local_34 == 8) goto LAB_00185a9b;
      if (local_34 != 4) goto LAB_00185bdf;
      goto LAB_00185b75;
    case 5:
      pcVar12 = *(code **)(lVar2 + 0x48);
      if (pcVar12 == (code *)0x0) goto LAB_00185bdf;
      uVar11 = *(undefined8 *)(param_1 + 0x220);
      uVar14 = 5;
      goto LAB_00185b59;
    case 6:
      pcVar12 = *(code **)(lVar2 + 0x58);
      if (pcVar12 == (code *)0x0) goto LAB_00185bdf;
      uVar11 = *(undefined8 *)(param_1 + 0x220);
      uVar14 = 6;
      goto LAB_00185b59;
    case 7:
      if (((*(code **)(lVar2 + 0x68) == (code *)0x0) ||
          (uVar9 = (**(code **)(lVar2 + 0x68))
                             (*(undefined8 *)(param_1 + 0x220),7,puVar13,iVar15,&local_34),
          *(ushort *)(param_2 + 0xc) < 4)) || (local_34 != 8)) goto LAB_00185bdf;
LAB_00185a9b:
      uVar11 = _uarpNtohll(*puVar13);
      *puVar13 = uVar11;
      goto LAB_00185bdf;
    case 8:
      pcVar12 = *(code **)(lVar2 + 0x88);
      if (pcVar12 == (code *)0x0) goto LAB_00185bdf;
      uVar11 = *(undefined8 *)(param_1 + 0x220);
      uVar14 = 8;
      goto LAB_00185b59;
    case 9:
      pcVar12 = *(code **)(lVar2 + 0x98);
      if (pcVar12 == (code *)0x0) goto LAB_00185bdf;
      uVar11 = *(undefined8 *)(param_1 + 0x220);
      uVar14 = 9;
      goto LAB_00185b59;
    case 10:
      pcVar12 = *(code **)(lVar2 + 0xa8);
      if (pcVar12 == (code *)0x0) goto LAB_00185bdf;
      uVar11 = *(undefined8 *)(param_1 + 0x220);
      uVar14 = 10;
      goto LAB_00185b59;
    case 0xb:
      pcVar12 = *(code **)(lVar2 + 0xb8);
      if (pcVar12 == (code *)0x0) goto LAB_00185bdf;
      uVar11 = *(undefined8 *)(param_1 + 0x220);
      uVar14 = 0xb;
      goto LAB_00185b59;
    case 0xc:
      pcVar12 = *(code **)(lVar2 + 200);
      if (pcVar12 == (code *)0x0) goto LAB_00185bdf;
      uVar11 = *(undefined8 *)(param_1 + 0x220);
      uVar14 = 0xc;
      break;
    case 0xd:
      pcVar12 = *(code **)(lVar2 + 0xd8);
      if (pcVar12 == (code *)0x0) goto LAB_00185bdf;
      uVar11 = *(undefined8 *)(param_1 + 0x220);
      uVar14 = 0xd;
      break;
    case 0xe:
      pcVar12 = *(code **)(lVar2 + 0xe8);
      if (pcVar12 == (code *)0x0) goto LAB_00185bdf;
      uVar11 = *(undefined8 *)(param_1 + 0x220);
      uVar14 = 0xe;
      break;
    case 0xf:
      pcVar12 = *(code **)(lVar2 + 0xf8);
      if (pcVar12 == (code *)0x0) goto LAB_00185bdf;
      uVar11 = *(undefined8 *)(param_1 + 0x220);
      uVar14 = 0xf;
      break;
    case 0x10:
      pcVar12 = *(code **)(lVar2 + 0x108);
      if (pcVar12 == (code *)0x0) goto LAB_00185bdf;
      uVar11 = *(undefined8 *)(param_1 + 0x220);
      uVar14 = 0x10;
      goto LAB_00185b59;
    case 0x11:
      pcVar12 = *(code **)(lVar2 + 0x118);
      if (pcVar12 == (code *)0x0) goto LAB_00185bdf;
      uVar11 = *(undefined8 *)(param_1 + 0x220);
      uVar14 = 0x11;
      break;
    case 0x12:
      pcVar12 = *(code **)(lVar2 + 0x128);
      if (pcVar12 == (code *)0x0) goto LAB_00185bdf;
      uVar11 = *(undefined8 *)(param_1 + 0x220);
      uVar14 = 0x12;
      break;
    case 0x13:
      pcVar12 = *(code **)(lVar2 + 0x138);
      if (pcVar12 == (code *)0x0) goto LAB_00185bdf;
      uVar11 = *(undefined8 *)(param_1 + 0x220);
      uVar14 = 0x13;
      goto LAB_00185b59;
    case 0x14:
      pcVar12 = *(code **)(lVar2 + 0x148);
      if (pcVar12 == (code *)0x0) goto LAB_00185bdf;
      uVar11 = *(undefined8 *)(param_1 + 0x220);
      uVar14 = 0x14;
      goto LAB_00185b59;
    case 0x15:
      pcVar12 = *(code **)(lVar2 + 0x158);
      if (pcVar12 == (code *)0x0) goto LAB_00185bdf;
      uVar11 = *(undefined8 *)(param_1 + 0x220);
      uVar14 = 0x15;
      goto LAB_00185b59;
    case 0x16:
      pcVar12 = *(code **)(lVar2 + 0x168);
      if (pcVar12 == (code *)0x0) goto LAB_00185bdf;
      uVar11 = *(undefined8 *)(param_1 + 0x220);
      uVar14 = 0x16;
LAB_00185b59:
      uVar9 = (*pcVar12)(uVar11,uVar14,puVar13,iVar15,&local_34);
      if ((3 < *(ushort *)(param_2 + 0xc)) && (local_34 == 4)) {
LAB_00185b75:
        uVar8 = _uarpNtohl(*(undefined4 *)puVar13);
        *(undefined4 *)puVar13 = uVar8;
      }
      goto LAB_00185bdf;
    case 0x17:
      pcVar12 = *(code **)(lVar2 + 0x178);
      if (pcVar12 == (code *)0x0) goto LAB_00185bdf;
      uVar11 = *(undefined8 *)(param_1 + 0x220);
      uVar14 = 0x17;
      break;
    case 0x18:
      pcVar12 = *(code **)(lVar2 + 0x188);
      if (pcVar12 == (code *)0x0) goto LAB_00185bdf;
      uVar11 = *(undefined8 *)(param_1 + 0x220);
      uVar14 = 0x18;
      break;
    case 0x19:
      pcVar12 = *(code **)(lVar2 + 0x198);
      if (pcVar12 == (code *)0x0) goto LAB_00185bdf;
      uVar11 = *(undefined8 *)(param_1 + 0x220);
      uVar14 = 0x19;
      break;
    case 0x1a:
      pcVar12 = *(code **)(lVar2 + 0x1a8);
      if (pcVar12 == (code *)0x0) goto LAB_00185bdf;
      uVar11 = *(undefined8 *)(param_1 + 0x220);
      uVar14 = 0x1a;
      break;
    case 0x1b:
      pcVar12 = *(code **)(lVar2 + 0x1b8);
      if (pcVar12 == (code *)0x0) goto LAB_00185bdf;
      uVar11 = *(undefined8 *)(param_1 + 0x220);
      uVar14 = 0x1b;
      break;
    case 0x1c:
      pcVar12 = *(code **)(lVar2 + 0x1c8);
      if (pcVar12 == (code *)0x0) goto LAB_00185bdf;
      uVar11 = *(undefined8 *)(param_1 + 0x220);
      uVar14 = 0x1c;
      break;
    case 0x1d:
      pcVar12 = *(code **)(lVar2 + 0x78);
      if (pcVar12 == (code *)0x0) goto LAB_00185bdf;
      uVar11 = *(undefined8 *)(param_1 + 0x220);
      uVar14 = 0x1d;
    }
    uVar9 = (*pcVar12)(uVar11,uVar14,puVar13,iVar15,&local_34);
LAB_00185bdf:
    uVar9 = _uarpNtohl(uVar9);
    *(undefined4 *)(lVar1 + 0xb) = uVar9;
    uVar9 = _uarpNtohl(iVar6);
    *(undefined4 *)(lVar1 + 0xf) = uVar9;
    uVar9 = _uarpNtohl(local_34);
    *(undefined4 *)(lVar1 + 0x13) = uVar9;
    sVar3 = (short)local_34;
    uVar5 = _uarpNtohs(local_34 + 0x11U & 0xffff);
    *(undefined2 *)(lVar1 + 2) = uVar5;
    *(short *)(lVar10 + 0x1c) = sVar3 + 0x17;
    uVar9 = _uarpTransmitBuffer2(param_1,param_2);
    return uVar9;
  }
  if (param_6 < 4) {
    return 9;
  }
  if (param_6 < 0xc) {
    return 8;
  }
  iVar15 = _uarpNtohl(param_5[1]);
  uVar7 = _uarpNtohl(param_5[2]);
  if (param_6 < uVar7 + 0xc || 0xfffffff3 < uVar7) {
    return 8;
  }
  puVar16 = (undefined8 *)(param_5 + 3);
  puVar13 = (undefined8 *)0x0;
  if (uVar7 != 0) {
    puVar13 = puVar16;
  }
  uVar9 = 1;
  if (0x1c < iVar15 - 1U) {
    return 1;
  }
  lVar10 = *(long *)(param_1 + 0x28);
  switch(iVar15) {
  case 1:
    pcVar12 = *(code **)(lVar10 + 0x10);
    break;
  case 2:
    pcVar12 = *(code **)(lVar10 + 0x20);
    break;
  case 3:
    pcVar12 = *(code **)(lVar10 + 0x30);
    break;
  case 4:
    if (*(long *)(lVar10 + 0x40) == 0) {
      return 1;
    }
    puVar17 = (undefined8 *)(lVar10 + 0x40);
    if (uVar7 == 8) {
LAB_00185e12:
      uVar11 = _uarpNtohll(*puVar16);
      *puVar16 = uVar11;
    }
    else if (uVar7 == 4) goto LAB_00185ec1;
LAB_00185ed4:
    pcVar12 = (code *)*puVar17;
    goto LAB_00185f02;
  case 5:
    pcVar12 = *(code **)(lVar10 + 0x50);
    if (pcVar12 == (code *)0x0) {
      return 1;
    }
    if (uVar7 == 4) {
      puVar17 = (undefined8 *)(lVar10 + 0x50);
LAB_00185ec1:
      uVar9 = _uarpNtohl(*(undefined4 *)puVar16);
      *(undefined4 *)puVar16 = uVar9;
      goto LAB_00185ed4;
    }
    goto LAB_00185f02;
  case 6:
    pcVar12 = *(code **)(lVar10 + 0x60);
    if (pcVar12 == (code *)0x0) {
      return 1;
    }
    if (uVar7 == 4) {
      puVar17 = (undefined8 *)(lVar10 + 0x60);
      goto LAB_00185ec1;
    }
    goto LAB_00185f02;
  case 7:
    pcVar12 = *(code **)(lVar10 + 0x70);
    if (pcVar12 == (code *)0x0) {
      return 1;
    }
    if (uVar7 == 8) {
      puVar17 = (undefined8 *)(lVar10 + 0x70);
      goto LAB_00185e12;
    }
    goto LAB_00185f02;
  case 8:
    pcVar12 = *(code **)(lVar10 + 0x90);
    if (pcVar12 == (code *)0x0) {
      return 1;
    }
    if (uVar7 == 4) {
      puVar17 = (undefined8 *)(lVar10 + 0x90);
      goto LAB_00185ec1;
    }
    goto LAB_00185f02;
  case 9:
    pcVar12 = *(code **)(lVar10 + 0xa0);
    if (pcVar12 == (code *)0x0) {
      return 1;
    }
    if (uVar7 == 4) {
      puVar17 = (undefined8 *)(lVar10 + 0xa0);
      goto LAB_00185ec1;
    }
    goto LAB_00185f02;
  case 10:
    pcVar12 = *(code **)(lVar10 + 0xb0);
    if (pcVar12 == (code *)0x0) {
      return 1;
    }
    if (uVar7 == 4) {
      puVar17 = (undefined8 *)(lVar10 + 0xb0);
      goto LAB_00185ec1;
    }
    goto LAB_00185f02;
  case 0xb:
    pcVar12 = *(code **)(lVar10 + 0xc0);
    if (pcVar12 == (code *)0x0) {
      return 1;
    }
    if (uVar7 == 4) {
      puVar17 = (undefined8 *)(lVar10 + 0xc0);
      goto LAB_00185ec1;
    }
    goto LAB_00185f02;
  case 0xc:
    pcVar12 = *(code **)(lVar10 + 0xd0);
    break;
  case 0xd:
    pcVar12 = *(code **)(lVar10 + 0xe0);
    break;
  case 0xe:
    pcVar12 = *(code **)(lVar10 + 0xf0);
    break;
  case 0xf:
    pcVar12 = *(code **)(lVar10 + 0x100);
    break;
  case 0x10:
    pcVar12 = *(code **)(lVar10 + 0x110);
    if (pcVar12 == (code *)0x0) {
      return 1;
    }
    if (uVar7 == 4) {
      puVar17 = (undefined8 *)(lVar10 + 0x110);
      goto LAB_00185ec1;
    }
    goto LAB_00185f02;
  case 0x11:
    pcVar12 = *(code **)(lVar10 + 0x120);
    break;
  case 0x12:
    pcVar12 = *(code **)(lVar10 + 0x130);
    break;
  case 0x13:
    pcVar12 = *(code **)(lVar10 + 0x140);
    if (pcVar12 == (code *)0x0) {
      return 1;
    }
    if (uVar7 == 4) {
      puVar17 = (undefined8 *)(lVar10 + 0x140);
      goto LAB_00185ec1;
    }
    goto LAB_00185f02;
  case 0x14:
    pcVar12 = *(code **)(lVar10 + 0x150);
    if (pcVar12 == (code *)0x0) {
      return 1;
    }
    if (uVar7 == 4) {
      puVar17 = (undefined8 *)(lVar10 + 0x150);
      goto LAB_00185ec1;
    }
    goto LAB_00185f02;
  case 0x15:
    pcVar12 = *(code **)(lVar10 + 0x160);
    if (pcVar12 == (code *)0x0) {
      return 1;
    }
    if (uVar7 == 4) {
      puVar17 = (undefined8 *)(lVar10 + 0x160);
      goto LAB_00185ec1;
    }
    goto LAB_00185f02;
  case 0x16:
    pcVar12 = *(code **)(lVar10 + 0x170);
    if (pcVar12 == (code *)0x0) {
      return 1;
    }
    if (uVar7 == 4) {
      puVar17 = (undefined8 *)(lVar10 + 0x170);
      goto LAB_00185ec1;
    }
    goto LAB_00185f02;
  case 0x17:
    pcVar12 = *(code **)(lVar10 + 0x180);
    break;
  case 0x18:
    pcVar12 = *(code **)(lVar10 + 400);
    break;
  case 0x19:
    pcVar12 = *(code **)(lVar10 + 0x1a0);
    break;
  case 0x1a:
    pcVar12 = *(code **)(lVar10 + 0x1b0);
    break;
  case 0x1b:
    pcVar12 = *(code **)(lVar10 + 0x1c0);
    break;
  case 0x1c:
    pcVar12 = *(code **)(lVar10 + 0x1d0);
    break;
  case 0x1d:
    pcVar12 = *(code **)(lVar10 + 0x80);
  }
  if (pcVar12 != (code *)0x0) {
LAB_00185f02:
    (*pcVar12)(*(undefined8 *)(param_1 + 0x220),*(undefined8 *)(param_2 + 10),puVar13,uVar7);
    uVar9 = 0;
  }
  return uVar9;
}

