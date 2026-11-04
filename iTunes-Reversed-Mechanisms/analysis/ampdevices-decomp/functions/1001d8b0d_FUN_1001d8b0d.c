// name: FUN_1001d8b0d
// address: 1001d8b0d

undefined8 FUN_1001d8b0d(long param_1,byte *param_2,ulong param_3,ulong *param_4)

{
  long *plVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  if (param_2 == (byte *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    uVar7 = 0xffffffce;
    if (cVar4 != '\0') {
      FUN_1006b697e(uVar5);
    }
  }
  else if (param_4 == (ulong *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    uVar7 = 0xffffffce;
    if (cVar4 != '\0') {
      FUN_1006b6908(uVar5);
    }
  }
  else {
    pbVar9 = param_2;
    if (0 < (long)param_3) {
      pbVar10 = param_2;
      do {
        iVar3 = *(int *)(param_1 + 0x9d4);
        uVar7 = 0xffffffd9;
        switch(iVar3) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
          bVar2 = *pbVar10;
          iVar6 = -0x30;
          if (9 < (byte)(bVar2 - 0x30)) {
            if ((0x25 < bVar2 - 0x41) ||
               ((0x3f0000003fU >> ((ulong)(bVar2 - 0x41) & 0x3f) & 1) == 0)) {
              if ((iVar3 != 1) || (*(long *)(param_1 + 0x9d8) != 0)) {
                *(undefined4 *)(param_1 + 0x9d4) = 9;
                break;
              }
              goto switchD_1001d8b83_default;
            }
            iVar6 = -0x37;
            if (0x46 < bVar2) {
              iVar6 = -0x57;
            }
          }
          *(ulong *)(param_1 + 0x9d8) =
               (ulong)(iVar6 + (uint)bVar2) | *(long *)(param_1 + 0x9d8) << 4;
          *(int *)(param_1 + 0x9d4) = iVar3 + 1;
          pbVar10 = pbVar10 + 1;
          break;
        case 9:
          if (*pbVar10 == 0xd) {
            *(undefined4 *)(param_1 + 0x9d4) = 10;
          }
          goto LAB_1001d8d65;
        case 10:
          if (*pbVar10 != 10) goto switchD_1001d8b83_default;
          pbVar10 = pbVar10 + 1;
          *(uint *)(param_1 + 0x9d4) = (uint)(*(long *)(param_1 + 0x9d8) == 0) * 5 + 0xb;
          break;
        case 0xb:
          uVar8 = (long)(param_2 + param_3) - (long)pbVar10;
          if (*(ulong *)(param_1 + 0x9d8) <= uVar8) {
            uVar8 = *(ulong *)(param_1 + 0x9d8);
          }
          if (uVar8 == 1) {
            *pbVar9 = *pbVar10;
          }
          else if (pbVar10 != pbVar9) {
            FUN_1001c631b(pbVar10,pbVar9,uVar8);
          }
          pbVar10 = pbVar10 + uVar8;
          pbVar9 = pbVar9 + uVar8;
          plVar1 = (long *)(param_1 + 0x9d8);
          *plVar1 = *plVar1 - uVar8;
          if (*plVar1 == 0) {
            *(undefined4 *)(param_1 + 0x9d4) = 0xc;
          }
          break;
        case 0xc:
          if (*pbVar10 != 0xd) goto switchD_1001d8b83_default;
          pbVar10 = pbVar10 + 1;
          *(undefined4 *)(param_1 + 0x9d4) = 0xd;
          break;
        case 0xd:
          if (*pbVar10 != 10) goto switchD_1001d8b83_default;
          pbVar10 = pbVar10 + 1;
          *(undefined4 *)(param_1 + 0x9d4) = 1;
          break;
        case 0xe:
          if (*pbVar10 == 0xd) {
            *(undefined4 *)(param_1 + 0x9d4) = 0xf;
          }
          goto LAB_1001d8d65;
        case 0xf:
          if (*pbVar10 != 10) goto switchD_1001d8b83_default;
          pbVar10 = pbVar10 + 1;
          *(undefined4 *)(param_1 + 0x9d4) = 0x10;
          break;
        case 0x10:
          if (*pbVar10 == 0xd) {
            *(undefined4 *)(param_1 + 0x9d4) = 0x11;
          }
          else {
            *(undefined4 *)(param_1 + 0x9d4) = 0xe;
          }
LAB_1001d8d65:
          pbVar10 = pbVar10 + 1;
          break;
        case 0x11:
          if (*pbVar10 != 10) goto switchD_1001d8b83_default;
          pbVar10 = pbVar10 + 1;
          *(undefined4 *)(param_1 + 0x9d4) = 0x12;
          break;
        default:
          goto switchD_1001d8b83_default;
        }
      } while (pbVar10 < param_2 + param_3);
    }
    uVar7 = 0;
switchD_1001d8b83_default:
    *param_4 = (long)pbVar9 - (long)param_2;
    if ((ulong)((long)pbVar9 - (long)param_2) <= param_3) {
      return uVar7;
    }
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      FUN_1006b6892(uVar5);
    }
  }
  FUN_1001782e9(0,0);
  return uVar7;
}

