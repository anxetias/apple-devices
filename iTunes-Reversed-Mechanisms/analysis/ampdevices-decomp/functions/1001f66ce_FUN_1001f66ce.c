// name: FUN_1001f66ce
// address: 1001f66ce

uint FUN_1001f66ce(void *param_1,char *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  size_t sVar10;
  ulong uVar11;
  undefined1 uVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  ulong uVar16;
  bool bVar17;
  ulong local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (void *)0x0) {
    uVar4 = 0xffffff9a;
  }
  else {
    uVar3 = 0;
    if (*(int *)((long)param_1 + 0x70) == 1) {
      uVar3 = FUN_1001f5f7b(param_1,0,0);
    }
    if (param_2 == (char *)0x0) {
      param_2 = *(char **)((long)param_1 + 0x10198);
    }
    lVar6 = FUN_1001a7046(param_1,*(undefined8 *)((long)param_1 + 0x58));
    uVar16 = 0;
    if (uVar3 == 0) {
      plVar15 = *(long **)((long)param_1 + 0x60);
      uVar3 = 0;
      if (plVar15 != (long *)0x0) {
        uVar16 = 0;
        uVar3 = 0;
        do {
          lVar8 = plVar15[2];
          bVar17 = uVar3 == 0;
          uVar3 = 0xffffffff;
          if (bVar17) {
            if (lVar8 == 0) {
              lVar8 = 0;
              uVar3 = 0;
            }
            else {
              lVar7 = (**(code **)((long)param_1 + 0x10))
                                (*(undefined8 *)((long)param_1 + 0x38),
                                 *(undefined8 *)((long)param_1 + 0x58),plVar15 + 4);
              lVar8 = plVar15[2];
              uVar3 = -(uint)(lVar7 != lVar8);
            }
          }
          uVar16 = uVar16 + lVar8;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
    puVar2 = *(undefined8 **)((long)param_1 + 0x60);
    while (puVar2 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)*puVar2;
      _free(puVar2);
      puVar2 = puVar1;
    }
    *(undefined8 *)((long)param_1 + 0x60) = 0;
    *(undefined8 *)((long)param_1 + 0x68) = 0;
    if (0xfffffffe < (ulong)(lVar6 - *(long *)((long)param_1 + 0x10188))) {
      lVar8 = FUN_1001a7046(param_1,*(undefined8 *)((long)param_1 + 0x58));
      uVar14 = *(undefined8 *)((long)param_1 + 0x58);
      uVar4 = 0x6064b50;
      lVar7 = 0;
      do {
        *(char *)((long)&local_40 + lVar7) = (char)uVar4;
        uVar4 = uVar4 >> 8;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 4);
      lVar7 = (**(code **)((long)param_1 + 0x10))
                        (*(undefined8 *)((long)param_1 + 0x38),uVar14,&local_40);
      if (lVar7 == 4) {
        uVar14 = *(undefined8 *)((long)param_1 + 0x58);
        uVar12 = 0x2c;
        lVar7 = 0;
        do {
          *(undefined1 *)((long)&local_40 + lVar7) = uVar12;
          lVar7 = lVar7 + 1;
          uVar12 = 0;
        } while (lVar7 != 8);
        lVar7 = (**(code **)((long)param_1 + 0x10))
                          (*(undefined8 *)((long)param_1 + 0x38),uVar14,&local_40);
        if (lVar7 == 8) {
          local_40 = CONCAT62(local_40._2_6_,0x2d);
          lVar7 = (**(code **)((long)param_1 + 0x10))
                            (*(undefined8 *)((long)param_1 + 0x38),
                             *(undefined8 *)((long)param_1 + 0x58));
          if (lVar7 == 2) {
            local_40 = CONCAT62(local_40._2_6_,0x2d);
            lVar7 = (**(code **)((long)param_1 + 0x10))
                              (*(undefined8 *)((long)param_1 + 0x38),
                               *(undefined8 *)((long)param_1 + 0x58));
            if (lVar7 == 2) {
              local_40 = local_40 & 0xffffffff00000000;
              lVar7 = (**(code **)((long)param_1 + 0x10))
                                (*(undefined8 *)((long)param_1 + 0x38),
                                 *(undefined8 *)((long)param_1 + 0x58));
              if (lVar7 == 4) {
                local_40 = local_40 & 0xffffffff00000000;
                lVar7 = (**(code **)((long)param_1 + 0x10))
                                  (*(undefined8 *)((long)param_1 + 0x38),
                                   *(undefined8 *)((long)param_1 + 0x58));
                if (lVar7 == 4) {
                  uVar14 = *(undefined8 *)((long)param_1 + 0x58);
                  lVar7 = 0;
                  uVar11 = *(ulong *)((long)param_1 + 0x10190);
                  do {
                    uVar9 = uVar11;
                    *(char *)((long)&local_40 + lVar7) = (char)uVar9;
                    lVar7 = lVar7 + 1;
                    uVar11 = uVar9 >> 8;
                  } while (lVar7 != 8);
                  if (0xff < uVar9) {
                    local_40 = 0xffffffffffffffff;
                  }
                  lVar7 = (**(code **)((long)param_1 + 0x10))
                                    (*(undefined8 *)((long)param_1 + 0x38),uVar14,&local_40);
                  if (lVar7 == 8) {
                    uVar14 = *(undefined8 *)((long)param_1 + 0x58);
                    lVar7 = 0;
                    uVar11 = *(ulong *)((long)param_1 + 0x10190);
                    do {
                      uVar9 = uVar11;
                      *(char *)((long)&local_40 + lVar7) = (char)uVar9;
                      lVar7 = lVar7 + 1;
                      uVar11 = uVar9 >> 8;
                    } while (lVar7 != 8);
                    if (0xff < uVar9) {
                      local_40 = 0xffffffffffffffff;
                    }
                    lVar7 = (**(code **)((long)param_1 + 0x10))
                                      (*(undefined8 *)((long)param_1 + 0x38),uVar14,&local_40);
                    if (lVar7 == 8) {
                      uVar14 = *(undefined8 *)((long)param_1 + 0x58);
                      lVar7 = 0;
                      uVar11 = uVar16;
                      do {
                        uVar9 = uVar11;
                        *(char *)((long)&local_40 + lVar7) = (char)uVar9;
                        lVar7 = lVar7 + 1;
                        uVar11 = uVar9 >> 8;
                      } while (lVar7 != 8);
                      if (0xff < uVar9) {
                        local_40 = 0xffffffffffffffff;
                      }
                      lVar7 = (**(code **)((long)param_1 + 0x10))
                                        (*(undefined8 *)((long)param_1 + 0x38),uVar14,&local_40);
                      if (lVar7 == 8) {
                        uVar14 = *(undefined8 *)((long)param_1 + 0x58);
                        lVar7 = 0;
                        uVar11 = lVar6 - *(long *)((long)param_1 + 0x10188);
                        do {
                          uVar9 = uVar11;
                          *(char *)((long)&local_40 + lVar7) = (char)uVar9;
                          lVar7 = lVar7 + 1;
                          uVar11 = uVar9 >> 8;
                        } while (lVar7 != 8);
                        if (0xff < uVar9) {
                          local_40 = 0xffffffffffffffff;
                        }
                        (**(code **)((long)param_1 + 0x10))
                                  (*(undefined8 *)((long)param_1 + 0x38),uVar14,&local_40);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      lVar7 = *(long *)((long)param_1 + 0x10188);
      uVar14 = *(undefined8 *)((long)param_1 + 0x58);
      uVar4 = 0x7064b50;
      lVar13 = 0;
      do {
        *(char *)((long)&local_40 + lVar13) = (char)uVar4;
        uVar4 = uVar4 >> 8;
        lVar13 = lVar13 + 1;
      } while (lVar13 != 4);
      lVar13 = (**(code **)((long)param_1 + 0x10))
                         (*(undefined8 *)((long)param_1 + 0x38),uVar14,&local_40);
      if (lVar13 == 4) {
        local_40 = local_40 & 0xffffffff00000000;
        lVar13 = (**(code **)((long)param_1 + 0x10))
                           (*(undefined8 *)((long)param_1 + 0x38),
                            *(undefined8 *)((long)param_1 + 0x58));
        if (lVar13 == 4) {
          uVar14 = *(undefined8 *)((long)param_1 + 0x58);
          lVar13 = 0;
          uVar11 = lVar8 - lVar7;
          do {
            uVar9 = uVar11;
            *(char *)((long)&local_40 + lVar13) = (char)uVar9;
            lVar13 = lVar13 + 1;
            uVar11 = uVar9 >> 8;
          } while (lVar13 != 8);
          if (0xff < uVar9) {
            local_40 = 0xffffffffffffffff;
          }
          lVar8 = (**(code **)((long)param_1 + 0x10))
                            (*(undefined8 *)((long)param_1 + 0x38),uVar14,&local_40);
          if (lVar8 == 8) {
            uVar14 = *(undefined8 *)((long)param_1 + 0x58);
            uVar12 = 1;
            lVar8 = 0;
            do {
              *(undefined1 *)((long)&local_40 + lVar8) = uVar12;
              lVar8 = lVar8 + 1;
              uVar12 = 0;
            } while (lVar8 != 4);
            (**(code **)((long)param_1 + 0x10))
                      (*(undefined8 *)((long)param_1 + 0x38),uVar14,&local_40);
          }
        }
      }
    }
    if (uVar3 == 0) {
      uVar14 = *(undefined8 *)((long)param_1 + 0x58);
      uVar4 = 0x6054b50;
      lVar8 = 0;
      do {
        *(char *)((long)&local_40 + lVar8) = (char)uVar4;
        uVar4 = uVar4 >> 8;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 4);
      lVar8 = (**(code **)((long)param_1 + 0x10))
                        (*(undefined8 *)((long)param_1 + 0x38),uVar14,&local_40,4);
      uVar3 = 0xffffffff;
      if (lVar8 == 4) {
        local_40 = local_40 & 0xffffffffffff0000;
        lVar8 = (**(code **)((long)param_1 + 0x10))
                          (*(undefined8 *)((long)param_1 + 0x38),
                           *(undefined8 *)((long)param_1 + 0x58),&local_40,2);
        if (lVar8 == 2) {
          local_40 = local_40 & 0xffffffffffff0000;
          lVar8 = (**(code **)((long)param_1 + 0x10))
                            (*(undefined8 *)((long)param_1 + 0x38),
                             *(undefined8 *)((long)param_1 + 0x58),&local_40,2);
          if (lVar8 == 2) {
            if (*(ulong *)((long)param_1 + 0x10190) < 0xffff) {
              local_40 = CONCAT62(local_40._2_6_,(short)*(ulong *)((long)param_1 + 0x10190));
            }
            else {
              local_40 = CONCAT62(local_40._2_6_,0xffff);
            }
            lVar8 = (**(code **)((long)param_1 + 0x10))
                              (*(undefined8 *)((long)param_1 + 0x38),
                               *(undefined8 *)((long)param_1 + 0x58),&local_40,2);
            if (lVar8 == 2) {
              if (*(ulong *)((long)param_1 + 0x10190) < 0xffff) {
                local_40 = CONCAT62(local_40._2_6_,(short)*(ulong *)((long)param_1 + 0x10190));
              }
              else {
                local_40 = CONCAT62(local_40._2_6_,0xffff);
              }
              lVar8 = (**(code **)((long)param_1 + 0x10))
                                (*(undefined8 *)((long)param_1 + 0x38),
                                 *(undefined8 *)((long)param_1 + 0x58),&local_40,2);
              if (lVar8 == 2) {
                uVar14 = *(undefined8 *)((long)param_1 + 0x58);
                lVar8 = 0;
                do {
                  uVar11 = uVar16;
                  *(char *)((long)&local_40 + lVar8) = (char)uVar11;
                  lVar8 = lVar8 + 1;
                  uVar16 = uVar11 >> 8;
                } while (lVar8 != 4);
                if (0xff < uVar11) {
                  local_40 = CONCAT44(local_40._4_4_,0xffffffff);
                }
                lVar8 = (**(code **)((long)param_1 + 0x10))
                                  (*(undefined8 *)((long)param_1 + 0x38),uVar14,&local_40);
                if (lVar8 == 4) {
                  uVar16 = lVar6 - *(long *)((long)param_1 + 0x10188);
                  uVar14 = *(undefined8 *)((long)param_1 + 0x58);
                  if (uVar16 < 0xffffffff) {
                    lVar6 = 0;
                    do {
                      uVar11 = uVar16;
                      *(char *)((long)&local_40 + lVar6) = (char)uVar11;
                      lVar6 = lVar6 + 1;
                      uVar16 = uVar11 >> 8;
                    } while (lVar6 != 4);
                    if (0xff < uVar11) {
                      local_40 = CONCAT44(local_40._4_4_,0xffffffff);
                    }
                  }
                  else {
                    uVar4 = 0xffffffff;
                    lVar6 = 0;
                    do {
                      *(char *)((long)&local_40 + lVar6) = (char)uVar4;
                      uVar4 = uVar4 >> 8;
                      lVar6 = lVar6 + 1;
                    } while (lVar6 != 4);
                  }
                  lVar6 = (**(code **)((long)param_1 + 0x10))
                                    (*(undefined8 *)((long)param_1 + 0x38),uVar14,&local_40,4);
                  if (lVar6 == 4) {
                    if (param_2 == (char *)0x0) {
                      uVar14 = *(undefined8 *)((long)param_1 + 0x58);
                      local_40 = local_40 & 0xffffffffffff0000;
                      uVar16 = 0;
                      uVar4 = 0;
                    }
                    else {
                      sVar10 = _strlen(param_2);
                      uVar14 = *(undefined8 *)((long)param_1 + 0x58);
                      uVar4 = (uint)sVar10;
                      uVar16 = sVar10 & 0xffffffff;
                      local_40 = CONCAT62(local_40._2_6_,(short)sVar10);
                      if (0xffff < uVar4) {
                        local_40 = CONCAT62(local_40._2_6_,0xffff);
                        uVar4 = 1;
                      }
                    }
                    lVar6 = (**(code **)((long)param_1 + 0x10))
                                      (*(undefined8 *)((long)param_1 + 0x38),uVar14,&local_40,2);
                    bVar17 = lVar6 != 2;
                    if ((uVar4 != 0) && (lVar6 == 2)) {
                      uVar11 = (**(code **)((long)param_1 + 0x10))
                                         (*(undefined8 *)((long)param_1 + 0x38),
                                          *(undefined8 *)((long)param_1 + 0x58),param_2,uVar16);
                      bVar17 = uVar11 != uVar16;
                    }
                    uVar3 = -(uint)bVar17;
                  }
                }
              }
            }
          }
        }
      }
    }
    iVar5 = (**(code **)((long)param_1 + 0x28))
                      (*(undefined8 *)((long)param_1 + 0x38),*(undefined8 *)((long)param_1 + 0x58));
    uVar4 = -(uint)(uVar3 == 0) | uVar3;
    if (iVar5 == 0) {
      uVar4 = uVar3;
    }
    if (*(void **)((long)param_1 + 0x10198) != (void *)0x0) {
      _free(*(void **)((long)param_1 + 0x10198));
    }
    _free(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

