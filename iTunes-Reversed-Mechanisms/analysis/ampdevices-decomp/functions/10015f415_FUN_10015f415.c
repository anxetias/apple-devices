// name: FUN_10015f415
// address: 10015f415

ulong FUN_10015f415(byte *param_1,uint param_2,long param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  if (param_2 == 0 || param_1 != (byte *)0x0) {
    if (param_3 == 0) {
      uVar7 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar7,0x10);
      if (cVar5 != '\0') {
        FUN_10066e2ad(uVar7);
      }
    }
    else {
      uVar6 = FUN_10015f36c(param_2);
      if (uVar6 <= param_4) {
        uVar8 = 0;
        if (2 < param_2) {
          uVar8 = 0;
          do {
            bVar1 = *param_1;
            bVar2 = param_1[1];
            bVar3 = param_1[2];
            iVar4 = (int)uVar8;
            *(char *)(param_3 + uVar8) =
                 "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[bVar1 >> 2];
            *(char *)(param_3 + (ulong)(iVar4 + 1)) =
                 "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                 [((uint)bVar2 * 0x100 | (uint)bVar1 << 0x10) >> 0xc & 0x3f];
            *(char *)(param_3 + (ulong)(iVar4 + 2)) =
                 "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                 [(uint)bVar2 * 0x100 + (uint)bVar3 >> 6 & 0x3f];
            uVar8 = (ulong)(iVar4 + 4);
            *(char *)(param_3 + (ulong)(iVar4 + 3)) =
                 "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[bVar3 & 0x3f];
            param_1 = param_1 + 3;
            param_2 = param_2 - 3;
          } while (2 < param_2);
        }
        if (param_2 == 0) {
          return uVar8;
        }
        uVar6 = (uint)*param_1 << 0x10;
        if (param_2 == 2) {
          uVar6 = uVar6 | (uint)param_1[1] << 8;
        }
        *(char *)(param_3 + uVar8) =
             "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar6 >> 0x12];
        *(char *)(param_3 + 1 + uVar8) =
             "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar6 >> 0xc & 0x3f]
        ;
        cVar5 = '=';
        if (param_2 == 2) {
          cVar5 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                  [uVar6 >> 6 & 0x3f];
        }
        *(char *)(param_3 + (uVar8 | 2)) = cVar5;
        *(undefined1 *)(param_3 + 3 + uVar8) = 0x3d;
        return (ulong)((int)uVar8 + 4);
      }
      uVar7 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar7,0x10);
      if (cVar5 != '\0') {
        FUN_10066e237(uVar7);
      }
    }
  }
  else {
    uVar7 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar7,0x10);
    if (cVar5 != '\0') {
      FUN_10066e1c1(uVar7);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

