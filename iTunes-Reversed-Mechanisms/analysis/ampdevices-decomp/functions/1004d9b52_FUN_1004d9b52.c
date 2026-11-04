// name: FUN_1004d9b52
// address: 1004d9b52

void FUN_1004d9b52(long *param_1,int param_2,long *param_3,undefined8 *param_4,undefined8 *param_5)

{
  int iVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  long *plVar9;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98;
  long lStack_90;
  undefined **local_88;
  long local_80;
  long lStack_78;
  undefined ***local_68;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_2 == 0x74646170) && (cVar3 = FUN_10031b8dc(param_1[0xe]), cVar3 == '\x06')) &&
     (cVar3 = FUN_1002e86fc(param_4,(char)param_1[0xf],0x74646170), cVar3 != '\0')) {
    FUN_1001c76b2(param_1,param_4 + 0x19);
  }
  cVar3 = FUN_1001ee056();
  if (cVar3 == '\0') {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_58._0_2_ = 0x202;
      local_58._2_2_ = 0x822;
      local_58._4_4_ = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x37ef;
      uStack_48 = 0x7a;
      uStack_46 = 1;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,1);
  }
  else if ((*(byte *)((long)param_1 + 0x79) & 1) == 0) {
    if (param_2 < 0x6d706c69) {
      if (param_2 < 0x63535241) {
        if (param_2 < 0x61706c69) {
          if (param_2 == 0x414c6d66) {
            if ((int)param_4 == 0) goto LAB_1004daf28;
            FUN_1004db798(&local_98,param_1,1);
            if (local_98 == 0) {
              uVar7 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar7,0x10);
              if (cVar3 != '\0') {
                local_58._0_2_ = 0x202;
                local_58._2_2_ = 0x822;
                local_58._4_4_ = 0x7a168c;
                uStack_50 = 1;
                uStack_4c = 0x822;
                uStack_4a = 0x5f83;
                uStack_48 = 0x7d;
                uStack_46 = 1;
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              cVar3 = FUN_1001782e9(0,0);
              if (cVar3 == '\0') goto LAB_1004daf1c;
            }
            FUN_10057fb92(local_98,param_3,(ulong)param_4 & 0xffffffff);
          }
          else if (param_2 == 0x41526d66) {
            FUN_1004db798(&local_98,param_1,1);
            if (local_98 == 0) {
              uVar7 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar7,0x10);
              if (cVar3 != '\0') {
                local_58._0_2_ = 0x202;
                local_58._2_2_ = 0x822;
                local_58._4_4_ = 0x7a168c;
                uStack_50 = 1;
                uStack_4c = 0x822;
                uStack_4a = 0x5f83;
                uStack_48 = 0x7d;
                uStack_46 = 1;
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              cVar3 = FUN_1001782e9(0,0);
              if (cVar3 == '\0') goto LAB_1004daf1c;
            }
            FUN_10057feda(local_98,param_3,(ulong)param_4 & 0xffffffff);
          }
          else {
            if (param_2 != 0x53506d66) goto LAB_1004daf28;
            FUN_1004db798(&local_98,param_1,1);
            if (local_98 == 0) {
              uVar7 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar7,0x10);
              if (cVar3 != '\0') {
                local_58._0_2_ = 0x202;
                local_58._2_2_ = 0x822;
                local_58._4_4_ = 0x7a168c;
                uStack_50 = 1;
                uStack_4c = 0x822;
                uStack_4a = 0x5f83;
                uStack_48 = 0x7d;
                uStack_46 = 1;
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              cVar3 = FUN_1001782e9(0,0);
              if (cVar3 == '\0') goto LAB_1004daf1c;
            }
            FUN_10057eddc(local_98,param_3,(ulong)param_4 & 0xffffffff);
          }
        }
        else {
          if (param_2 < 0x634e5043) {
            if (param_2 == 0x61706c69) goto LAB_1004da1dd;
            if (param_2 == 0x61747269) {
              *(byte *)((long)param_3 + 199) = *(byte *)((long)param_3 + 199) | 0x20;
            }
            goto LAB_1004daf28;
          }
          if (param_2 == 0x634e5043) {
            FUN_1004db798(&local_98,param_1,1);
            if (local_98 == 0) {
              uVar7 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar7,0x10);
              if (cVar3 != '\0') {
                local_58._0_2_ = 0x202;
                local_58._2_2_ = 0x822;
                local_58._4_4_ = 0x7a168c;
                uStack_50 = 1;
                uStack_4c = 0x822;
                uStack_4a = 0x5f83;
                uStack_48 = 0x7d;
                uStack_46 = 1;
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              cVar3 = FUN_1001782e9(0,0);
              if (cVar3 == '\0') goto LAB_1004daf1c;
            }
            FUN_10057ff9e(local_98,(ulong)param_3 & 0xffffffff,(ulong)param_4 & 0xff,
                          (char)param_5 != '\0');
          }
          else {
            if (param_2 != 0x63504443) goto LAB_1004daf28;
            FUN_1004db798(&local_98,param_1,1);
            if (local_98 == 0) {
              uVar7 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar7,0x10);
              if (cVar3 != '\0') {
                local_58._0_2_ = 0x202;
                local_58._2_2_ = 0x822;
                local_58._4_4_ = 0x7a168c;
                uStack_50 = 1;
                uStack_4c = 0x822;
                uStack_4a = 0x5f83;
                uStack_48 = 0x7d;
                uStack_46 = 1;
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              cVar3 = FUN_1001782e9(0,0);
              if (cVar3 == '\0') goto LAB_1004daf1c;
            }
            FUN_100580098(local_98,param_3,param_4);
          }
        }
        goto LAB_1004daf1c;
      }
      if (param_2 < 0x64706c69) {
        if (param_2 == 0x63535241) {
          if ((char)param_3 == '\x01') {
            FUN_1004db798(&local_98,param_1,1);
            if (local_98 == 0) {
              uVar7 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar7,0x10);
              if (cVar3 != '\0') {
                local_58._0_2_ = 0x202;
                local_58._2_2_ = 0x822;
                local_58._4_4_ = 0x7a168c;
                uStack_50 = 1;
                uStack_4c = 0x822;
                uStack_4a = 0x5f83;
                uStack_48 = 0x7d;
                uStack_46 = 1;
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              cVar3 = FUN_1001782e9(0,0);
              if (cVar3 == '\0') goto LAB_1004daf1c;
            }
            *(undefined1 *)(local_98 + 0x120) = 1;
            goto LAB_1004daf1c;
          }
        }
        else if (param_2 == 0x6370636e) {
          cVar3 = FUN_1002e86fc(param_3,(char)param_1[0xf],0x6370636e);
          if (cVar3 != '\0') {
            FUN_1004db798(&local_98,param_1,1);
            if (local_98 == 0) {
              uVar7 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar7,0x10);
              if (cVar3 != '\0') {
                local_58._0_2_ = 0x202;
                local_58._2_2_ = 0x822;
                local_58._4_4_ = 0x7a168c;
                uStack_50 = 1;
                uStack_4c = 0x822;
                uStack_4a = 0x5f83;
                uStack_48 = 0x7d;
                uStack_46 = 1;
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              cVar3 = FUN_1001782e9(0,0);
              if (cVar3 == '\0') goto LAB_1004daf1c;
            }
            FUN_10057e98c(local_98,param_3);
            goto LAB_1004daf1c;
          }
        }
        else if ((param_2 == 0x63706c64) &&
                (cVar3 = FUN_1002e86fc(param_3,(char)param_1[0xf],0x63706c64), cVar3 != '\0')) {
          FUN_1004db798(&local_98,param_1,1);
          if (local_98 == 0) {
            uVar7 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            if (cVar3 != '\0') {
              local_58._0_2_ = 0x202;
              local_58._2_2_ = 0x822;
              local_58._4_4_ = 0x7a168c;
              uStack_50 = 1;
              uStack_4c = 0x822;
              uStack_4a = 0x5f83;
              uStack_48 = 0x7d;
              uStack_46 = 1;
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            cVar3 = FUN_1001782e9(0,0);
            if (cVar3 == '\0') goto LAB_1004daf1c;
          }
          if (((ulong)param_4 & 0x40) != 0) {
            FUN_10057e98c(local_98,param_3);
          }
          if (((ulong)param_4 & 0x10) == 0) {
            if ((int)param_4 == 0) goto LAB_1004daf1c;
          }
          else {
            FUN_10057e8cc(local_98,param_3,*param_5);
          }
          cVar3 = FUN_1004dbb86(param_1);
          if ((cVar3 != '\0') && (cVar3 = FUN_1003144da(param_3[1]), cVar3 == '\0')) {
            FUN_1004db846(param_1,1);
          }
          goto LAB_1004daf1c;
        }
      }
      else if (param_2 < 0x6474726e) {
        if (param_2 == 0x64706c69) {
LAB_1004da1dd:
          if ((param_3 != (long *)0x0) && ((int *)*param_3 != (int *)0x0)) {
            if (*(int *)*param_3 != 0x706c7374) {
              uVar7 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar7,0x10);
              if (cVar3 != '\0') {
                local_58._0_2_ = 0x202;
                local_58._2_2_ = 0x822;
                local_58._4_4_ = 0x7ab58c;
                uStack_50 = 1;
                uStack_4c = 0x822;
                uStack_4a = 0x2d50;
                uStack_48 = 0x7b;
                uStack_46 = 1;
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              cVar3 = FUN_1001782e9(0,1);
              if (cVar3 == '\0') goto LAB_1004daf28;
            }
            if (((((int)param_3[8] != 0) &&
                 (cVar3 = FUN_1002e86fc(*param_3,(char)param_1[0xf],param_2), cVar3 != '\0')) &&
                (((*(byte *)(*param_3 + 0x298) & 1) == 0 || (*(char *)(*param_3 + 0x2a0) != '\x01'))
                )) && (cVar3 = FUN_1002e8670(param_3[1],(char)param_1[0xf],1), cVar3 != '\0')) {
              FUN_1004db798(&local_98,param_1,1);
              if (local_98 == 0) {
                uVar7 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar7,0x10);
                if (cVar3 != '\0') {
                  local_58._0_2_ = 0x202;
                  local_58._2_2_ = 0x822;
                  local_58._4_4_ = 0x7a168c;
                  uStack_50 = 1;
                  uStack_4c = 0x822;
                  uStack_4a = 0x5f83;
                  uStack_48 = 0x7d;
                  uStack_46 = 1;
                  __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                cVar3 = FUN_1001782e9(0,0);
                if (cVar3 == '\0') goto LAB_1004daf1c;
              }
              FUN_10057e98c(local_98,*param_3);
              goto LAB_1004daf1c;
            }
          }
        }
        else if ((param_2 == 0x64747269) &&
                (cVar3 = FUN_1002e8670(param_3,(char)param_1[0xf],1), cVar3 != '\0')) {
          uVar7 = FUN_1003c5880();
          cVar3 = _os_log_type_enabled(uVar7,1);
          if (cVar3 != '\0') {
            lVar4 = *param_3;
            FUN_100476ac1(&local_98,param_3);
            uVar6 = FUN_1001b83ae(&local_98);
            local_58._0_2_ = 0x202;
            local_58._2_2_ = 0x800;
            local_58._4_4_ = (undefined4)lVar4;
            uStack_50 = (undefined4)((ulong)lVar4 >> 0x20);
            uStack_4c = 0x820;
            uStack_4a = (undefined2)uVar6;
            uStack_48 = (undefined2)((ulong)uVar6 >> 0x10);
            uStack_46 = (undefined4)((ulong)uVar6 >> 0x20);
            __os_log_impl(0x100000000,uVar7,1,"ch> adding trackInfo to delete list %lld (\'%s\')",
                          &local_58,0x16);
            FUN_1001b7a50(&local_98);
          }
          FUN_1004db798(&local_98,param_1,1);
          if (local_98 == 0) {
            uVar7 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            if (cVar3 != '\0') {
              local_58._0_2_ = 0x202;
              local_58._2_2_ = 0x822;
              local_58._4_4_ = 0x7a168c;
              uStack_50 = 1;
              uStack_4c = 0x822;
              uStack_4a = 0x5f83;
              uStack_48 = 0x7d;
              uStack_46 = 1;
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            cVar3 = FUN_1001782e9(0,0);
            if (cVar3 == '\0') goto LAB_1004daf1c;
          }
          FUN_10057f55a(local_98,param_3);
          goto LAB_1004daf1c;
        }
      }
      else if (param_2 == 0x6474726e) {
        cVar3 = FUN_1002e85fc(param_3,(char)param_1[0xf],1);
        if (cVar3 != '\0') {
          uVar7 = FUN_1003c5880();
          cVar3 = _os_log_type_enabled(uVar7,1);
          if (cVar3 != '\0') {
            lVar4 = param_3[5];
            FUN_100476ac1(&local_98,param_3[1]);
            uVar6 = FUN_1001b83ae(&local_98);
            local_58._0_2_ = 0x202;
            local_58._2_2_ = 0x800;
            local_58._4_4_ = (undefined4)lVar4;
            uStack_50 = (undefined4)((ulong)lVar4 >> 0x20);
            uStack_4c = 0x820;
            uStack_4a = (undefined2)uVar6;
            uStack_48 = (undefined2)((ulong)uVar6 >> 0x10);
            uStack_46 = (undefined4)((ulong)uVar6 >> 0x20);
            __os_log_impl(0x100000000,uVar7,1,
                          "ch> adding trackInstance to delete list %lld (\'%s\')",&local_58,0x16);
            FUN_1001b7a50(&local_98);
          }
          FUN_1004db798(&local_98,param_1,1);
          if (local_98 == 0) {
            uVar7 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            if (cVar3 != '\0') {
              local_58._0_2_ = 0x202;
              local_58._2_2_ = 0x822;
              local_58._4_4_ = 0x7a168c;
              uStack_50 = 1;
              uStack_4c = 0x822;
              uStack_4a = 0x5f83;
              uStack_48 = 0x7d;
              uStack_46 = 1;
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            cVar3 = FUN_1001782e9(0,0);
            if (cVar3 == '\0') goto LAB_1004daf1c;
          }
          FUN_10057f7ee(local_98,param_3);
          goto LAB_1004daf1c;
        }
      }
      else if ((param_2 == 0x6c747269) &&
              (cVar3 = FUN_1002e85fc(param_4,(char)param_1[0xf],1), cVar3 != '\0')) {
        if ((*(ushort *)((long)param_3 + 0xc6) >> 0xd & 1) != 0) {
          *(ushort *)((long)param_3 + 0xc6) = *(ushort *)((long)param_3 + 0xc6) & 0xdfff;
          FUN_1004db798(&local_98,param_1,1);
          if (local_98 == 0) {
            uVar7 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            if (cVar3 != '\0') {
              local_58._0_2_ = 0x202;
              local_58._2_2_ = 0x822;
              local_58._4_4_ = 0x7a168c;
              uStack_50 = 1;
              uStack_4c = 0x822;
              uStack_4a = 0x5f83;
              uStack_48 = 0x7d;
              uStack_46 = 1;
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            cVar3 = FUN_1001782e9(0,0);
            if (cVar3 != '\0') goto LAB_1004da408;
          }
          else {
LAB_1004da408:
            FUN_10057eea0(local_98,param_3);
            FUN_10057fad4(local_98,param_3[5]);
            FUN_10057fe1c(local_98,param_3[8]);
            if (lStack_90 != 0) {
              LOCK();
              *(long *)(lStack_90 + 8) = *(long *)(lStack_90 + 8) + 1;
              UNLOCK();
            }
            local_88 = &PTR_FUN_10085ee80;
            local_80 = local_98;
            lStack_78 = lStack_90;
            local_a8 = 0;
            uStack_a0 = 0;
            local_68 = &local_88;
            FUN_100473946(param_3,&local_88);
            if (local_68 == &local_88) {
              lVar4 = 0x20;
LAB_1004dae79:
              (**(code **)((long)*local_68 + lVar4))();
            }
            else {
              lVar4 = 0x28;
              if (local_68 != (undefined ***)0x0) goto LAB_1004dae79;
            }
            FUN_100205d70(&local_a8);
          }
          FUN_100205d70(&local_98);
        }
        cVar3 = FUN_1003144da(param_3[2]);
        if (cVar3 == '\0') {
          FUN_1004db846(param_1,1);
        }
      }
    }
    else if (param_2 < 0x74327270) {
      if (0x706d7065 < param_2) {
        if (param_2 < 0x74326170) {
          if (param_2 == 0x706d7066) {
            cVar3 = FUN_1002e86fc(param_3,(char)param_1[0xf],0x706d7066);
            if (cVar3 != '\0') {
              uVar7 = *param_4;
              FUN_1004db798(&local_98,param_1,1);
              if (local_98 == 0) {
                uVar6 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar6,0x10);
                if (cVar3 != '\0') {
                  local_58._0_2_ = 0x202;
                  local_58._2_2_ = 0x822;
                  local_58._4_4_ = 0x7a168c;
                  uStack_50 = 1;
                  uStack_4c = 0x822;
                  uStack_4a = 0x5f83;
                  uStack_48 = 0x7d;
                  uStack_46 = 1;
                  __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                cVar3 = FUN_1001782e9(0,0);
                if (cVar3 == '\0') goto LAB_1004daf1c;
              }
              FUN_10057e8cc(local_98,param_3,uVar7);
              cVar3 = FUN_1003144da(param_3[1]);
              if (cVar3 == '\0') {
                FUN_1004db846(param_1,1);
              }
              goto LAB_1004daf1c;
            }
          }
          else if (param_2 == 0x74326161) {
            FUN_1004db798(&local_98,param_1,1);
            if (local_98 == 0) {
              uVar7 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar7,0x10);
              if (cVar3 != '\0') {
                local_58._0_2_ = 0x202;
                local_58._2_2_ = 0x822;
                local_58._4_4_ = 0x7a168c;
                uStack_50 = 1;
                uStack_4c = 0x822;
                uStack_4a = 0x5f83;
                uStack_48 = 0x7d;
                uStack_46 = 1;
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              cVar3 = FUN_1001782e9(0,0);
              if (cVar3 == '\0') goto LAB_1004daf1c;
            }
            FUN_10057fe1c(local_98,param_4);
            goto LAB_1004daf1c;
          }
        }
        else {
          if (param_2 == 0x74326170) {
            FUN_1004db798(&local_98,param_1,1);
            if (local_98 == 0) {
              uVar7 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar7,0x10);
              if (cVar3 != '\0') {
                local_58._0_2_ = 0x202;
                local_58._2_2_ = 0x822;
                local_58._4_4_ = 0x7a168c;
                uStack_50 = 1;
                uStack_4c = 0x822;
                uStack_4a = 0x5f83;
                uStack_48 = 0x7d;
                uStack_46 = 1;
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              cVar3 = FUN_1001782e9(0,0);
              if (cVar3 == '\0') goto LAB_1004daf1c;
            }
            FUN_10057eba8(local_98,param_4);
            goto LAB_1004daf1c;
          }
          if (param_2 == 0x74327261) {
            lVar4 = param_1[0x10];
            local_58._0_2_ = (undefined2)lVar4;
            local_58._2_2_ = (undefined2)((ulong)lVar4 >> 0x10);
            local_58._4_4_ = (undefined4)((ulong)lVar4 >> 0x20);
            lVar2 = param_1[0x11];
            uStack_50 = (undefined4)lVar2;
            uStack_4c = (undefined2)((ulong)lVar2 >> 0x20);
            uStack_4a = (undefined2)((ulong)lVar2 >> 0x30);
            if (lVar2 != 0) {
              LOCK();
              *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
              UNLOCK();
            }
            if (lVar4 != 0) {
              FUN_10057fdb8(lVar4,param_4);
            }
            goto LAB_1004dac83;
          }
        }
        goto LAB_1004daf28;
      }
      if (param_2 == 0x6d706c69) goto LAB_1004da1dd;
      if (param_2 == 0x6d706c73) {
        cVar3 = FUN_1002e86fc(param_3,(char)param_1[0xf],0x6d706c73);
        if (cVar3 != '\0') {
          FUN_1004db798(&local_98,param_1,1);
          if (local_98 == 0) {
            uVar7 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            if (cVar3 != '\0') {
              local_58._0_2_ = 0x202;
              local_58._2_2_ = 0x822;
              local_58._4_4_ = 0x7a168c;
              uStack_50 = 1;
              uStack_4c = 0x822;
              uStack_4a = 0x5f83;
              uStack_48 = 0x7d;
              uStack_46 = 1;
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            cVar3 = FUN_1001782e9(0,0);
            if (cVar3 == '\0') goto LAB_1004daf1c;
          }
          FUN_10057e812(local_98,param_3);
          cVar3 = FUN_1003144da(param_3[1]);
          if (cVar3 == '\0') {
            FUN_1004db846(param_1,1);
          }
          goto LAB_1004daf1c;
        }
      }
      else if ((param_2 == 0x6d747269) &&
              (cVar3 = FUN_1002e8670(param_3,(char)param_1[0xf],1), cVar3 != '\0')) {
        if ((*(ushort *)((long)param_3 + 0xc6) >> 0xd & 1) != 0) {
          *(ushort *)((long)param_3 + 0xc6) = *(ushort *)((long)param_3 + 0xc6) & 0xdfff;
          FUN_1004db798(&local_98,param_1,1);
          if (local_98 == 0) {
            uVar7 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            if (cVar3 != '\0') {
              local_58._0_2_ = 0x202;
              local_58._2_2_ = 0x822;
              local_58._4_4_ = 0x7a168c;
              uStack_50 = 1;
              uStack_4c = 0x822;
              uStack_4a = 0x5f83;
              uStack_48 = 0x7d;
              uStack_46 = 1;
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            cVar3 = FUN_1001782e9(0,0);
            if (cVar3 == '\0') goto LAB_1004daf1c;
          }
          FUN_10057eea0(local_98,param_3);
          FUN_10057fad4(local_98,param_3[5]);
          FUN_10057fe1c(local_98,param_3[8]);
          goto LAB_1004daf1c;
        }
        FUN_1004dbae6(&local_98,param_1);
        if (local_98 == 0) {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_58._0_2_ = 0x202;
            local_58._2_2_ = 0x822;
            local_58._4_4_ = 0x7a168c;
            uStack_50 = 1;
            uStack_4c = 0x822;
            uStack_4a = 0x5f99;
            uStack_48 = 0x7d;
            uStack_46 = 1;
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          cVar3 = FUN_1001782e9(0,0);
          if (cVar3 != '\0') goto LAB_1004da1bf;
        }
        else {
LAB_1004da1bf:
          FUN_1005b1da8(local_98,param_3,param_4,0);
        }
        FUN_100205d70(&local_98);
      }
    }
    else {
      if (0x74646c63 < param_2) {
        if (param_2 < 0x74647261) {
          if (param_2 == 0x74646c64) {
            if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
                    /* WARNING: Could not recover jumptable at 0x0001004dabf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*param_1 + 0x28))(param_1);
              return;
            }
            goto LAB_1004db6cb;
          }
          if (param_2 == 0x74646c70) {
            cVar3 = FUN_10031b8dc(param_1[0xe]);
            if (cVar3 == '\x06') {
              cVar3 = FUN_1001c19cd();
              if (cVar3 != '\0') {
                if (DAT_1008c7660 != -1) {
                  _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
                }
                uVar7 = DAT_1008c7658;
                cVar3 = _os_log_type_enabled(DAT_1008c7658,0x10);
                if (cVar3 != '\0') {
                  local_58._0_2_ = 0;
                  __os_log_impl(0x100000000,uVar7,0x10,"ch> (PREFS changed while app was quitting)",
                                &local_58,2);
                }
              }
              FUN_1004db798(&local_98,param_1,1);
              if (local_98 == 0) {
                uVar7 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar7,0x10);
                if (cVar3 != '\0') {
                  local_58._0_2_ = 0x202;
                  local_58._2_2_ = 0x822;
                  local_58._4_4_ = 0x7a168c;
                  uStack_50 = 1;
                  uStack_4c = 0x822;
                  uStack_4a = 0x5f83;
                  uStack_48 = 0x7d;
                  uStack_46 = 1;
                  __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                cVar3 = FUN_1001782e9(0,0);
                if (cVar3 == '\0') goto LAB_1004daf1c;
              }
              FUN_10057e270(local_98,(ulong)param_4 & 0xff);
              goto LAB_1004daf1c;
            }
            if (DAT_1008c7660 != -1) {
              _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
            }
            uVar7 = DAT_1008c7658;
            cVar3 = _os_log_type_enabled(DAT_1008c7658,0x10);
            if (cVar3 != '\0') {
              local_58._0_2_ = 0;
              __os_log_impl(0x100000000,uVar7,0x10,"ch> (PREFS changed before library is loaded)",
                            &local_58,2);
            }
          }
        }
        else {
          if (param_2 == 0x74647261) {
            lVar4 = param_1[0x10];
            local_58._0_2_ = (undefined2)lVar4;
            local_58._2_2_ = (undefined2)((ulong)lVar4 >> 0x10);
            local_58._4_4_ = (undefined4)((ulong)lVar4 >> 0x20);
            lVar2 = param_1[0x11];
            uStack_50 = (undefined4)lVar2;
            uStack_4c = (undefined2)((ulong)lVar2 >> 0x20);
            uStack_4a = (undefined2)((ulong)lVar2 >> 0x30);
            if (lVar2 != 0) {
              LOCK();
              *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
              UNLOCK();
            }
            if (lVar4 != 0) {
              FUN_10057fa70(lVar4,param_4);
            }
            goto LAB_1004dac83;
          }
          if ((param_2 == 0x74647270) &&
             (cVar3 = FUN_1002e86fc(param_4,(char)param_1[0xf],0x74647270), cVar3 != '\0')) {
            uVar7 = FUN_1003c5880();
            cVar3 = _os_log_type_enabled(uVar7,1);
            if (cVar3 != '\0') {
              uVar6 = param_4[0xc];
              FUN_100486d8f(&local_98,param_4);
              uVar5 = FUN_1001b83ae(&local_98);
              local_58._0_2_ = 0x202;
              local_58._2_2_ = 0x800;
              local_58._4_4_ = (undefined4)uVar6;
              uStack_50 = (undefined4)((ulong)uVar6 >> 0x20);
              uStack_4c = 0x820;
              uStack_4a = (undefined2)uVar5;
              uStack_48 = (undefined2)((ulong)uVar5 >> 0x10);
              uStack_46 = (undefined4)((ulong)uVar5 >> 0x20);
              __os_log_impl(0x100000000,uVar7,1,"ch> adding playlist to delete list %lld (\'%s\')",
                            &local_58,0x16);
              FUN_1001b7a50(&local_98);
            }
            FUN_1004db798(&local_98,param_1,1);
            if (local_98 == 0) {
              uVar7 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar7,0x10);
              if (cVar3 != '\0') {
                local_58._0_2_ = 0x202;
                local_58._2_2_ = 0x822;
                local_58._4_4_ = 0x7a168c;
                uStack_50 = 1;
                uStack_4c = 0x822;
                uStack_4a = 0x5f83;
                uStack_48 = 0x7d;
                uStack_46 = 1;
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              cVar3 = FUN_1001782e9(0,0);
              if (cVar3 == '\0') goto LAB_1004daf1c;
            }
            FUN_10057e69c(local_98,param_4);
            cVar3 = FUN_1003144da(param_4[1]);
            if (cVar3 == '\0') {
              FUN_1004db846(param_1,1);
            }
            goto LAB_1004daf1c;
          }
        }
        goto LAB_1004daf28;
      }
      if (param_2 < 0x74646161) {
        if (param_2 != 0x74327270) {
          if (param_2 != 0x74644443) goto LAB_1004daf28;
          cVar3 = FUN_1004dbb86(param_1);
          if (cVar3 != '\0') {
            if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
              FUN_1004db846(param_1,0);
              return;
            }
            goto LAB_1004db6cb;
          }
          local_98 = param_1[0x10];
          lStack_90 = param_1[0x11];
          if (lStack_90 != 0) {
            LOCK();
            *(long *)(lStack_90 + 8) = *(long *)(lStack_90 + 8) + 1;
            UNLOCK();
          }
          if (local_98 != 0) {
            if (*(char *)(local_98 + 0x11d) == '\x01') {
              uVar7 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar7,0x10);
              if (cVar3 != '\0') {
                local_58._0_2_ = 0x202;
                local_58._2_2_ = 0x822;
                local_58._4_4_ = 0x7a0a90;
                uStack_50 = 1;
                uStack_4c = 0x822;
                uStack_4a = 0x16bc;
                uStack_48 = 0x7a;
                uStack_46 = 1;
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
              iVar1 = *(int *)(local_98 + 0x118);
              if (DAT_1008c7660 != -1) {
                _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
              }
              uVar7 = DAT_1008c7658;
              cVar3 = _os_log_type_enabled(DAT_1008c7658,0x10);
              if (cVar3 != '\0') {
                if (iVar1 - 1U < 4) {
                  pcVar8 = &DAT_1007534d0 + *(int *)(&DAT_1007534d0 + (ulong)(iVar1 - 1U) * 4);
                }
                else {
                  pcVar8 = "Unknown";
                }
                local_58._0_2_ = 0x202;
                local_58._2_2_ = 0x822;
                local_58._4_4_ = SUB84(pcVar8,0);
                uStack_50 = (undefined4)((ulong)pcVar8 >> 0x20);
                uStack_4c = 0x400;
                uStack_4a = (undefined2)iVar1;
                uStack_48 = (undefined2)((uint)iVar1 >> 0x10);
                __os_log_impl(0x100000000,uVar7,0x10,
                              "ch> kAppCloudNotifyProcessingChanges is expecting an applied changes message but there are NO changes to send! Sending kAppCloudNotifyAppliedChanges to decrement count. kind:%{public}s-%d"
                              ,&local_58,0x12);
              }
              (**(code **)(*(long *)param_1[0xe] + 0x10))((long *)param_1[0xe],0x634e4143,iVar1,0,0)
              ;
            }
            FUN_10057df9e(local_98);
          }
          goto LAB_1004daf1c;
        }
        lVar4 = param_1[0x10];
        local_58._0_2_ = (undefined2)lVar4;
        local_58._2_2_ = (undefined2)((ulong)lVar4 >> 0x10);
        local_58._4_4_ = (undefined4)((ulong)lVar4 >> 0x20);
        lVar2 = param_1[0x11];
        uStack_50 = (undefined4)lVar2;
        uStack_4c = (undefined2)((ulong)lVar2 >> 0x20);
        uStack_4a = (undefined2)((ulong)lVar2 >> 0x30);
        if (lVar2 != 0) {
          LOCK();
          *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
          UNLOCK();
        }
        if (lVar4 != 0) {
          FUN_10057ec66(lVar4,param_4);
        }
LAB_1004dac83:
        plVar9 = &local_58;
      }
      else {
        if (param_2 == 0x74646161) {
          FUN_1004db798(&local_98,param_1,1);
          if (local_98 == 0) {
            uVar7 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            if (cVar3 != '\0') {
              local_58._0_2_ = 0x202;
              local_58._2_2_ = 0x822;
              local_58._4_4_ = 0x7a168c;
              uStack_50 = 1;
              uStack_4c = 0x822;
              uStack_4a = 0x5f83;
              uStack_48 = 0x7d;
              uStack_46 = 1;
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            cVar3 = FUN_1001782e9(0,0);
            if (cVar3 == '\0') goto LAB_1004daf1c;
          }
          FUN_10057fad4(local_98,param_4);
          goto LAB_1004daf1c;
        }
        if ((param_2 != 0x74646170) ||
           (cVar3 = FUN_1002e86fc(param_4,(char)param_1[0xf],0x74646170), cVar3 == '\0'))
        goto LAB_1004daf28;
        FUN_1004db798(&local_98,param_1,1);
        if (local_98 == 0) {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_58._0_2_ = 0x202;
            local_58._2_2_ = 0x822;
            local_58._4_4_ = 0x7a168c;
            uStack_50 = 1;
            uStack_4c = 0x822;
            uStack_4a = 0x5f83;
            uStack_48 = 0x7d;
            uStack_46 = 1;
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          cVar3 = FUN_1001782e9(0,0);
          if (cVar3 != '\0') goto LAB_1004da569;
        }
        else {
LAB_1004da569:
          FUN_10057e5e0(local_98,param_4);
          cVar3 = FUN_1003144da(param_4[1]);
          if (cVar3 == '\0') {
            FUN_1004db846(param_1,1);
          }
        }
        FUN_1001c76b2(param_1,param_4 + 0x19);
LAB_1004daf1c:
        plVar9 = &local_98;
      }
      FUN_100205d70(plVar9);
    }
  }
LAB_1004daf28:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
LAB_1004db6cb:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

