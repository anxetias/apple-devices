// name: FUN_100231348
// address: 100231348

undefined8
FUN_100231348(undefined8 param_1,long param_2,int param_3,int param_4,uint param_5,byte param_6)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  undefined1 local_270 [16];
  undefined1 local_260 [16];
  long local_250;
  undefined1 local_248 [16];
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_250 = param_2;
  FUN_1001b7a44(local_248);
  FUN_1001b7a44(param_1);
  if (param_3 == 0x646f5069) {
    if ((param_5 & 4) == 0) {
      if ((~param_5 & 0x8002) == 0) {
        FUN_1001c334a(local_238,param_6 | 0x110e0020);
        FUN_1001b80b2(local_248,local_238);
      }
      else if ((~param_5 & 0x8040) == 0) {
        FUN_1001c334a(local_238,param_6 + 0x110e0023);
        FUN_1001b80b2(local_248,local_238);
      }
      else if ((param_5 >> 0x14 & 1) == 0) {
        FUN_1001c334a(local_238,param_6 | 0x110e001e);
        FUN_1001b80b2(local_248,local_238);
      }
      else if (param_6 == 0) {
        FUN_1001c334a(local_238,(uint)(*(char *)(local_250 + 0x396) == '\0') * 2 + 0x110e004d);
        FUN_1001b80b2(local_248,local_238);
      }
      else {
        FUN_1001c334a(local_238,(uint)(*(char *)(local_250 + 0x396) == '\0') * 2 + 0x110e004e);
        FUN_1001b80b2(local_248,local_238);
      }
    }
    else {
      FUN_1001c334a(local_238,param_6 | 0x110e0026);
      FUN_1001b80b2(local_248,local_238);
    }
  }
  else {
    if (((*(char *)(local_250 + 0x151d0) == '\0') && ((param_5 & 0x1c65000) == 0)) &&
       (*(char *)(local_250 + 0x6acf) == '\0')) goto LAB_100231720;
    if (param_4 < 0x67656e75) {
      if (param_4 == 0x61727477) {
        FUN_1001c334a(local_238,param_6 + 0x110e0017);
        FUN_1001b80b2(local_248,local_238);
      }
      else if (param_4 == 0x666f746f) {
        FUN_1001c334a(local_238,param_6 + 0x110e0015);
        FUN_1001b80b2(local_248,local_238);
      }
      else {
LAB_100231524:
        uVar4 = param_5 & 0xffdffffb;
        if ((param_5 & 0xc00008) == 0) {
          uVar4 = param_5;
        }
        if ((~uVar4 & 0x8002) == 0) {
          FUN_1001c334a(local_238,(uint)param_6 * 2 + 0x110e0020);
          FUN_1001b80b2(local_248,local_238);
        }
        else if ((~uVar4 & 0x8040) == 0) {
          FUN_1001c334a(local_238,(uint)param_6 * 2 + 0x110e0023);
          FUN_1001b80b2(local_248,local_238);
        }
        else {
          uVar6 = (uint)param_6;
          if ((uVar4 & 4) == 0) {
            if ((uVar4 & 0x1004000) == 0) {
              if ((uVar4 & 0x402) == 0) {
                if ((uVar4 & 0x40) == 0) {
                  if ((uVar4 & 8) == 0) {
                    if ((uVar4 & 0xc00000) == 0) {
                      if ((uVar4 & 0x100121) == 0) {
                        if ((uVar4 & 0x60000) == 0) {
                          if ((uVar4 >> 0xc & 1) == 0) {
                            FUN_1001c334a(local_238,uVar6 + 0x110e0003);
                            FUN_1001b80b2(local_248,local_238);
                          }
                          else {
                            FUN_1001c334a(local_238,uVar6 + 0x110e0011);
                            FUN_1001b80b2(local_248,local_238);
                          }
                        }
                        else {
                          FUN_1001c334a(local_238,uVar6 + 0x110e0013);
                          FUN_1001b80b2(local_248,local_238);
                        }
                      }
                      else {
                        FUN_1001c334a(local_238,uVar6 + 0x110e0003);
                        FUN_1001b80b2(local_248,local_238);
                      }
                    }
                    else {
                      FUN_1001c334a(local_238,uVar6 + 0x110e000d);
                      FUN_1001b80b2(local_248,local_238);
                    }
                  }
                  else {
                    FUN_1001c334a(local_238,uVar6 + 0x110e000b);
                    FUN_1001b80b2(local_248,local_238);
                  }
                }
                else {
                  FUN_1001c334a(local_238,uVar6 + 0x110e0007);
                  FUN_1001b80b2(local_248,local_238);
                }
              }
              else {
                FUN_1001c334a(local_238,uVar6 + 0x110e0005);
                FUN_1001b80b2(local_248,local_238);
              }
            }
            else {
              FUN_1001c334a(local_238,uVar6 + 0x110e000f);
              FUN_1001b80b2(local_248,local_238);
            }
          }
          else {
            FUN_1001c334a(local_238,uVar6 + 0x110e0009);
            FUN_1001b80b2(local_248,local_238);
          }
        }
      }
    }
    else if (param_4 == 0x67656e75) {
      FUN_1001c334a(local_238,param_6 + 0x110e001b);
      FUN_1001b80b2(local_248,local_238);
    }
    else {
      if (param_4 != 0x6c797263) goto LAB_100231524;
      FUN_1001c334a(local_238,param_6 + 0x110e0019);
      FUN_1001b80b2(local_248,local_238);
    }
  }
  FUN_1001b7a50(local_238);
LAB_100231720:
  cVar3 = FUN_1001b8428(local_248);
  lVar2 = local_250;
  if (cVar3 == '\0') {
    uVar5 = *(ulong *)(local_250 + 0x6b28);
    uVar1 = *(ulong *)(local_250 + 0x6b20);
    FUN_1004f0e83(local_250,local_238);
    FUN_1001b8dfc(local_260,local_238);
    FUN_1001bbec4(local_270,local_248,local_260);
    FUN_1001b80b2(param_1,local_270);
    FUN_1001b7a50(local_270);
    FUN_1001b7a50(local_260);
    if (((*(int *)(lVar2 + 0x69c0) != 0) &&
        (uVar5 = (uVar5 | uVar1) & 0xffffffffebfffff0, uVar5 != 0x80000)) && (uVar5 != 0x40000000))
    {
      FUN_1001c334a(local_238,0x110e001d);
      FUN_1001b80b2(local_248,local_238);
      FUN_1001b7a50(local_238);
      FUN_1001b8e86(local_270,*(undefined4 *)(lVar2 + 0x69bc),1);
      FUN_1001b8e86(local_260,*(undefined4 *)(lVar2 + 0x69c0),1);
      FUN_1001bc048(local_238,local_248,param_1,local_270,local_260);
      FUN_1001b80b2(param_1,local_238);
      FUN_1001b7a50(local_238);
      FUN_1001b7a50(local_260);
      FUN_1001b7a50(local_270);
    }
  }
  FUN_1001b7a50(local_248);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

