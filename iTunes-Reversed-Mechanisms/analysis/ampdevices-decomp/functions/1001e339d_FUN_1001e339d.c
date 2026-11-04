// name: FUN_1001e339d
// address: 1001e339d

bool FUN_1001e339d(ushort *param_1,int param_2,ushort *param_3,int param_4,uint param_5)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  
  if (param_4 == 0 && param_2 == 0) {
    bVar11 = true;
  }
  else {
    if (param_1 == (ushort *)0x0) {
      uVar4 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar4,0x10);
      if (cVar3 != '\0') {
        FUN_1006bc75f(uVar4);
      }
      FUN_1001782e9(0,0);
    }
    if (param_3 == (ushort *)0x0) {
      uVar4 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar4,0x10);
      if (cVar3 != '\0') {
        FUN_1006bc7e7(uVar4);
      }
      FUN_1001782e9(0,0);
    }
    if ((param_5 & 2) == 0) {
LAB_1001e3478:
      if (param_2 != 0) {
        if (param_4 == 0) {
          return false;
        }
        if ((param_5 & 4) == 0) {
          if (DAT_1008a2770 != -1) {
            FUN_1006bc86f();
          }
          iVar10 = param_4 + -1;
          lVar5 = 0;
          do {
            uVar1 = param_1[lVar5];
            uVar7 = (uint)uVar1;
            if ((0x7a < uVar1) || ((&DAT_1008a2780)[uVar1] == '\0')) goto LAB_1001e3527;
            uVar2 = param_3[lVar5];
            if ((0x7a < uVar2) || ((&DAT_1008a2780)[uVar2] == '\0')) goto LAB_1001e3527;
            uVar9 = (uint)uVar2;
            if ((param_5 & 1) != 0) {
              uVar7 = uVar1 - 0x20;
              if (uVar1 < 0x61) {
                uVar7 = (uint)uVar1;
              }
              uVar9 = uVar2 - 0x20;
              if (uVar2 < 0x61) {
                uVar9 = (uint)uVar2;
              }
            }
            if (uVar7 != uVar9) {
              param_4 = 2;
              goto LAB_1001e353c;
            }
            lVar6 = lVar5 + 1;
            iVar8 = (int)lVar5;
          } while ((param_2 + -1 != iVar8) && (lVar5 = lVar6, iVar10 != iVar8));
          param_4 = 1;
          if (param_2 == (int)lVar6) {
            param_4 = -(uint)(iVar10 != iVar8);
          }
        }
        else {
LAB_1001e3527:
          param_4 = FUN_1001e7036(param_1,param_2,param_3,param_4,param_5);
        }
      }
    }
    else {
      iVar10 = param_2;
      for (; (param_2 = 0, iVar10 != 0 && (param_2 = iVar10, *param_1 < 0x21));
          param_1 = param_1 + 1) {
        iVar10 = iVar10 + -1;
      }
      for (; param_4 != 0; param_4 = param_4 + -1) {
        if (0x20 < *param_3) goto LAB_1001e3478;
        param_3 = param_3 + 1;
      }
      param_4 = 0;
      if (param_2 != 0) {
        return false;
      }
    }
LAB_1001e353c:
    bVar11 = param_4 == 0;
  }
  return bVar11;
}

