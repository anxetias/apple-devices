// name: FUN_1002c1df6
// address: 1002c1df6

void FUN_1002c1df6(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  undefined1 local_438 [512];
  undefined1 local_238 [520];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 0x58);
  lVar2 = *(long *)(param_2 + 0x58);
  uVar6 = (uint)(*(uint *)(lVar2 + 100) < *(uint *)(lVar1 + 100));
  if (*(uint *)(lVar1 + 100) < *(uint *)(lVar2 + 100)) {
    uVar6 = 0xffffffff;
  }
  if (uVar6 == 0) {
    uVar6 = (uint)(*(ushort *)(lVar2 + 0x54) < *(ushort *)(lVar1 + 0x54));
    if (*(ushort *)(lVar1 + 0x54) < *(ushort *)(lVar2 + 0x54)) {
      uVar6 = 0xffffffff;
    }
    if (uVar6 == 0) {
      uVar6 = (uint)(*(ushort *)(lVar2 + 0x74) < *(ushort *)(lVar1 + 0x74));
      if (*(ushort *)(lVar1 + 0x74) < *(ushort *)(lVar2 + 0x74)) {
        uVar6 = 0xffffffff;
      }
      if (uVar6 == 0) {
        uVar6 = (uint)(*(uint *)(lVar2 + 0x78) < *(uint *)(lVar1 + 0x78));
        if (*(uint *)(lVar1 + 0x78) < *(uint *)(lVar2 + 0x78)) {
          uVar6 = 0xffffffff;
        }
        if (uVar6 == 0) {
          lVar3 = *(long *)(lVar1 + 0x10);
          lVar4 = *(long *)(lVar2 + 0x10);
          uVar6 = (uint)(*(ulong *)(lVar4 + 0x20) < *(ulong *)(lVar3 + 0x20));
          if (*(ulong *)(lVar3 + 0x20) < *(ulong *)(lVar4 + 0x20)) {
            uVar6 = 0xffffffff;
          }
          if (uVar6 == 0) {
            uVar6 = (uint)(*(float *)(lVar2 + 0x50) < *(float *)(lVar1 + 0x50));
            if (*(float *)(lVar1 + 0x50) < *(float *)(lVar2 + 0x50)) {
              uVar6 = 0xffffffff;
            }
            if (uVar6 == 0) {
              uVar6 = (uint)(*(uint *)(lVar2 + 0x3c) < *(uint *)(lVar1 + 0x3c));
              if (*(uint *)(lVar1 + 0x3c) < *(uint *)(lVar2 + 0x3c)) {
                uVar6 = 0xffffffff;
              }
              if (uVar6 == 0) {
                uVar6 = (uint)(*(ushort *)(param_2 + 0x136) < *(ushort *)(param_1 + 0x136));
                if (*(ushort *)(param_1 + 0x136) < *(ushort *)(param_2 + 0x136)) {
                  uVar6 = 0xffffffff;
                }
                if (uVar6 == 0) {
                  uVar6 = (uint)(*(ushort *)(param_2 + 0x138) < *(ushort *)(param_1 + 0x138));
                  if (*(ushort *)(param_1 + 0x138) < *(ushort *)(param_2 + 0x138)) {
                    uVar6 = 0xffffffff;
                  }
                  if (uVar6 == 0) {
                    uVar6 = (uint)(*(ushort *)(param_2 + 0x13a) < *(ushort *)(param_1 + 0x13a));
                    if (*(ushort *)(param_1 + 0x13a) < *(ushort *)(param_2 + 0x13a)) {
                      uVar6 = 0xffffffff;
                    }
                    if (uVar6 == 0) {
                      uVar6 = (uint)(*(ushort *)(param_2 + 0x13c) < *(ushort *)(param_1 + 0x13c));
                      if (*(ushort *)(param_1 + 0x13c) < *(ushort *)(param_2 + 0x13c)) {
                        uVar6 = 0xffffffff;
                      }
                      if (uVar6 == 0) {
                        uVar6 = (uint)(*(ushort *)(param_2 + 0x142) < *(ushort *)(param_1 + 0x142));
                        if (*(ushort *)(param_1 + 0x142) < *(ushort *)(param_2 + 0x142)) {
                          uVar6 = 0xffffffff;
                        }
                        if (uVar6 == 0) {
                          uVar6 = (uint)(*(ulong *)(lVar4 + 8) < *(ulong *)(lVar3 + 8));
                          if (*(ulong *)(lVar3 + 8) < *(ulong *)(lVar4 + 8)) {
                            uVar6 = 0xffffffff;
                          }
                          if (uVar6 == 0) {
                            bVar5 = (bool)((byte)(*(uint *)(param_1 + 0xc2) >> 10) & 1);
                            bVar8 = (*(uint *)(param_2 + 0xc2) >> 10 & 1) != 0;
                            uVar6 = (uint)(bVar8 < bVar5);
                            if (bVar5 < bVar8) {
                              uVar6 = 0xffffffff;
                            }
                            if (uVar6 == 0) {
                              uVar6 = (uint)(*(uint *)(lVar2 + 0x7c) < *(uint *)(lVar1 + 0x7c));
                              if (*(uint *)(lVar1 + 0x7c) < *(uint *)(lVar2 + 0x7c)) {
                                uVar6 = 0xffffffff;
                              }
                              if (uVar6 == 0) {
                                uVar6 = (uint)(*(uint *)(lVar4 + 0x8c) < *(uint *)(lVar3 + 0x8c));
                                if (*(uint *)(lVar3 + 0x8c) < *(uint *)(lVar4 + 0x8c)) {
                                  uVar6 = 0xffffffff;
                                }
                                if (uVar6 == 0) {
                                  uVar6 = 0xffffffff;
                                  if (*(short *)(param_2 + 0x12a) <= *(short *)(param_1 + 0x12a)) {
                                    uVar6 = (uint)(*(short *)(param_2 + 0x12a) <
                                                  *(short *)(param_1 + 0x12a));
                                  }
                                  if (uVar6 == 0) {
                                    FUN_100476928(param_1,local_238);
                                    FUN_100476928(param_2,local_438);
                                    iVar7 = FUN_1001e4608(local_238,local_438,0);
                                    if (iVar7 == 0) {
                                      FUN_1004779ac(param_1,local_238);
                                      FUN_1004779ac(param_2,local_438);
                                      iVar7 = FUN_1001e4608(local_238,local_438,0);
                                      if (iVar7 == 0) {
                                        FUN_1004772c4(param_1,local_238);
                                        FUN_1004772c4(param_2,local_438);
                                        iVar7 = FUN_1001e4608(local_238,local_438,0);
                                        if (iVar7 == 0) {
                                          FUN_10047a7b5(param_1,local_238);
                                          FUN_10047a7b5(param_2,local_438);
                                          iVar7 = FUN_1001e4608(local_238,local_438,0);
                                          if (iVar7 == 0) {
                                            FUN_10047b307(param_1,local_238);
                                            FUN_10047b307(param_2,local_438);
                                            iVar7 = FUN_1001e4608(local_238,local_438,0);
                                            if (iVar7 == 0) {
                                              FUN_10047a0d2(param_1,local_238);
                                              FUN_10047a0d2(param_2,local_438);
                                              FUN_1001e4608(local_238,local_438,0);
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

