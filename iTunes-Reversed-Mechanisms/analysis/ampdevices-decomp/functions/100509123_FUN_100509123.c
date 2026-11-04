// name: FUN_100509123
// address: 100509123

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100509123(int param_1,undefined8 *param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  double dVar11;
  char local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined2 local_68;
  undefined2 uStack_66;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined2 local_5c;
  char *local_5a;
  undefined1 local_50 [24];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_5 == 0) {
LAB_100509214:
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_68 = 0x202;
      uStack_66 = 0x822;
      uStack_64 = 0x7a0a90;
      uStack_60 = 1;
      local_5c = 0x822;
      local_5a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_10050923a;
  }
  if (*(int *)(param_5 + 8) != 0x64756c63) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_68 = 0x202;
      uStack_66 = 0x822;
      uStack_64 = 0x7ab58c;
      uStack_60 = 1;
      local_5c = 0x822;
      local_5a = "handlerData->magic == kDulcimerHandlerDataMagic";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    cVar2 = FUN_1001782e9(0,1);
    if (cVar2 == '\0') goto LAB_100509214;
  }
  if (0x6c747268 < param_1) {
    if (0x73747268 < param_1) {
      if (0x7464636f < param_1) {
        if (param_1 < 0x75707267) {
          if (param_1 == 0x74646370) {
            if (*(undefined8 **)(param_5 + 0x30) == param_2) {
              uVar7 = FUN_1001c156e();
              FUN_1001c6987(uVar7,0x69706474,*(undefined4 *)(param_5 + 0x28),0,0);
            }
          }
          else if (((param_1 == 0x74646472) && (*(int *)((long)param_2 + 0x84) == 0x2062696c)) &&
                  (*(int *)(param_5 + 0x15398) = *(int *)(param_5 + 0x15398) + 1,
                  *(char *)(param_5 + 0x6abd) != '\0')) {
            FUN_1004e7aad(param_5,0);
          }
        }
        else if (param_1 == 0x75707267) {
          if (*(undefined8 **)(param_5 + 0x6750) == param_2) {
            if (*(long *)(param_5 + 0x16688) != 0) {
              FUN_100336982(param_5);
            }
          }
          else if ((*(long *)(param_5 + 0x30) == 0) ||
                  (*(undefined8 **)(*(long *)(param_5 + 0x30) + 0x2c60) != param_2)) {
            lVar8 = FUN_1004e0c3f(param_5,1);
            if ((lVar8 == 0) || (*(undefined8 **)(lVar8 + 0x2c60) != param_2)) goto LAB_10050923a;
            if (*(long *)(param_5 + 0x16688) != 0) {
              FUN_100336bb3(param_5,lVar8);
            }
          }
          else if (*(long *)(param_5 + 0x16688) != 0) {
            FUN_100336982(param_5);
            FUN_100336bb3(param_5,*(undefined8 *)(param_5 + 0x30));
          }
          if (*(char *)(param_2 + 0x11c) == '\0') {
            FUN_10050b8b8(&local_68);
            uVar7 = param_2[0x104];
            local_68 = (undefined2)uVar7;
            uStack_66 = (undefined2)((ulong)uVar7 >> 0x10);
            uStack_64 = (undefined4)((ulong)uVar7 >> 0x20);
            FUN_1001b8dfc(&local_78,param_2 + 3);
            FUN_1001b80b2(&uStack_60,&local_78);
            FUN_1001b7a50(&local_78);
            FUN_1001b8dfc(&local_78,param_2 + 0x83);
            FUN_1001b80b2(local_50,&local_78);
            FUN_1001b7a50(&local_78);
            uVar7 = FUN_1001c156e();
            FUN_1001c6987(uVar7,0x69707370,*(undefined4 *)(param_5 + 0x28),&local_68,
                          *(undefined4 *)(param_5 + 0x67b4));
            FUN_1001b7a50(local_50);
            FUN_1001b7a50(&uStack_60);
          }
        }
        else if (param_1 == 0x77786d6c) {
          local_80 = (char)param_2;
          if ((char)param_4 == '\0') {
            if (local_80 == '\0') {
              dVar11 = (double)FUN_1001ebd46();
              if (_DAT_100717f48 < dVar11 - *(double *)(param_5 + 0x16678)) {
                iVar5 = FUN_10025a150(1,param_5,0,0);
                if ((iVar5 != -0x80) && (iVar5 != 0)) {
                  uVar7 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar7,0x10);
                  if (cVar2 != '\0') {
                    local_68 = 0x202;
                    uStack_66 = 0x822;
                    uStack_64 = 0x7a0a90;
                    uStack_60 = 1;
                    local_5c = 0x400;
                    local_5a = (char *)CONCAT44(local_5a._4_4_,iVar5);
                    __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_68,
                                        0x12);
                  }
                }
                uVar7 = FUN_1001ebd46();
                *(undefined8 *)(param_5 + 0x16678) = uVar7;
              }
            }
            else if ((char)param_3 == '\0') {
              iVar5 = FUN_10025a150(1,param_5,1,0);
              if ((iVar5 != -0x80) && (iVar5 != 0)) {
                uVar7 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar7,0x10);
                if (cVar2 != '\0') {
                  local_68 = 0x202;
                  uStack_66 = 0x822;
                  uStack_64 = 0x7a0a90;
                  uStack_60 = 1;
                  local_5c = 0x400;
                  local_5a = (char *)CONCAT44(local_5a._4_4_,iVar5);
                  __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_68,
                                      0x12);
                }
              }
              FUN_10050b441(*(undefined4 *)(param_5 + 0x28),local_80 != '\0');
            }
          }
        }
        goto LAB_10050923a;
      }
      if (0x74644442 < param_1) {
        if (param_1 == 0x74644443) {
          if (*(int *)((long)param_2 + 0x84) == 0x2062696c) {
            if (*(char *)(param_5 + 0x159c0) != '\0') {
              *(undefined1 *)(param_5 + 0x159c0) = 0;
              FUN_10050b0cb(param_5);
            }
            if (*(char *)(param_5 + 0x159c1) != '\0') {
              *(undefined1 *)(param_5 + 0x159c1) = 0;
            }
          }
        }
        else if (((param_1 == 0x74646361) && (*(undefined8 **)(param_5 + 0x30) == param_2)) &&
                (*(long *)(param_5 + 0x16688) != 0)) {
          FUN_100394a78(param_5,0);
        }
        goto LAB_10050923a;
      }
      if (param_1 != 0x73747269) {
        if (param_1 == 0x73776473) {
          FUN_10023318f(param_5,"");
        }
        goto LAB_10050923a;
      }
      goto LAB_10050991b;
    }
    if (param_1 < 0x706d7377) {
      if (param_1 < 0x706d6572) {
        if (param_1 == 0x6c747269) {
          if ((((param_2 != (undefined8 *)0x0) && (*(int *)(param_2[2] + 0x84) == 0x2062696c)) &&
              (*(char *)(param_5 + 0x39c) != '\0')) &&
             (cVar2 = FUN_1002bd03f(param_2,*(undefined1 *)(param_5 + 0x39e),
                                    *(undefined1 *)(param_5 + 0x39d)), cVar2 != '\0')) {
            *(undefined1 *)(param_5 + 0x159c0) = 1;
          }
        }
        else if ((param_1 == 0x6d747269) && (param_2 != (undefined8 *)0x0)) {
          if (param_2[2] == *(long *)(param_5 + 0x30)) {
            cVar2 = FUN_10053916d(param_3,0x25);
            if ((((cVar2 != '\0') && (*(char *)(param_5 + 0x151d0) == '\0')) &&
                ((*(char *)(param_5 + 0x3a2) == '\0' ||
                 ((param_2[0xb] != 0 && ((*(byte *)(param_2[0xb] + 0x4a) & 1) == 0)))))) &&
               (FUN_100356a30(param_5,param_2,param_2,0), *(char *)(param_5 + 0x3a2) != '\0')) {
              FUN_100330868(param_5,param_2);
            }
            if (*(char *)(param_5 + 0x396) != '\0') {
              cVar2 = FUN_10053916d(param_3,0x3c);
              if (cVar2 == '\0') {
                cVar2 = FUN_10053916d(param_3,0xf);
                if ((cVar2 != '\0') && (uVar6 = FUN_1004744bf(param_2,0), (uVar6 >> 0x14 & 1) != 0))
                {
                  FUN_10032d72e(param_5,param_2,0);
                }
              }
              else {
                FUN_10050ab79(param_5,param_2);
              }
            }
            if ((*(char *)(param_5 + 0x391) != '\0') &&
               (cVar2 = FUN_10053916d(param_3,0x3c), cVar2 != '\0')) {
              FUN_10050afa9(param_5,param_2);
            }
            if ((*(char *)(param_5 + 0x6abf) != '\0') &&
               ((((*(char *)(param_5 + 0x35c) != '\0' ||
                  ((*(char *)(param_5 + 0x151d0) != '\0' &&
                   (cVar2 = FUN_1004ed02d(param_5), cVar2 != '\0')))) &&
                 (*(char *)(param_5 + 0x6acf) == '\0')) &&
                (((*(char *)(param_5 + 0x6ac5) == '\0' &&
                  (cVar2 = FUN_100539333(param_3,&DAT_100745510), cVar2 != '\0')) &&
                 (lVar8 = FUN_1004e38dc(param_2), lVar8 != 0)))))) {
              FUN_100314161(lVar8);
              FUN_1003624f9(lVar8,param_2);
              FUN_100314411(lVar8);
            }
          }
          else if (*(int *)(param_2[2] + 0x84) == 0x2062696c) {
            if (*(long *)(param_5 + 0x6748) != 0) {
              FUN_10052897c();
              if (*(long *)(param_5 + 0x6748) != 0) {
                uVar7 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar7,0x10);
                if (cVar2 != '\0') {
                  local_68 = 0x202;
                  uStack_66 = 0x822;
                  uStack_64 = 0x7a0a90;
                  uStack_60 = 1;
                  local_5c = 0x822;
                  local_5a = "handlerData->completeProgressBar == nullptr";
                  __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              *(undefined8 *)(param_5 + 0x6748) = 0;
            }
            if (((*(char *)(param_5 + 0x35c) != '\0') && (*(char *)(param_5 + 0x6abf) != '\0')) &&
               ((*(char *)(param_5 + 0x6ad5) == '\0' &&
                ((cVar2 = FUN_10053960e(param_3,&DAT_100753a20), cVar2 != '\0' &&
                 (lVar8 = FUN_100307b9e(*(undefined8 *)(param_5 + 0x30),*param_2), lVar8 != 0))))))
            {
              *(undefined1 *)(param_5 + 0x6ad5) = 1;
              FUN_10050a6f5(param_5,FUN_10050a859);
            }
          }
        }
      }
      else if (param_1 == 0x706d6572) {
        cVar2 = FUN_100266904(*(undefined8 *)(param_5 + 0x66d8));
        if ((cVar2 != '\0') && (*(int *)(param_5 + 0x66e0) != 0)) {
          *(undefined1 *)param_2 = 1;
        }
      }
      else if ((param_1 == 0x706d6573) && (*(long *)(param_5 + 0x30) != 0)) {
        FUN_10050a6f5(param_5,FUN_10050b2c2);
      }
      goto LAB_10050923a;
    }
    if (param_1 < 0x73646363) {
      if (param_1 == 0x706d7377) {
        if (*(char *)(param_5 + 0x153f0) != '\0') {
          FUN_10050b368(param_5);
        }
      }
      else if ((param_1 == 0x70706368) &&
              ((((*(char *)((long)param_2 + 0x22) != *(char *)(param_3 + 0x22) ||
                 (*(char *)((long)param_2 + 0x1c) != *(char *)(param_3 + 0x1c))) ||
                (*(char *)((long)param_2 + 0x1b) != *(char *)(param_3 + 0x1b))) ||
               (*(char *)((long)param_2 + 0x25) != *(char *)(param_3 + 0x25))))) {
        uVar7 = FUN_1001c156e();
        FUN_1001c6987(uVar7,0x69707070,*(undefined4 *)(param_5 + 0x28),0,0);
      }
      goto LAB_10050923a;
    }
    if (param_1 == 0x73646363) {
      lVar8 = FUN_1004e8236(param_5);
      if ((lVar8 != 0) && (cVar2 = FUN_1002ebbb6(lVar8), cVar2 != '\0')) {
        FUN_1002ebc0c(lVar8);
        uVar7 = FUN_1001c156e();
        FUN_1001c6987(uVar7,0x69707372,*(undefined4 *)(param_5 + 0x28),0,0);
      }
      goto LAB_10050923a;
    }
    if (param_1 != 0x73707267) goto LAB_10050923a;
LAB_1005097c7:
    if ((*(long *)(param_5 + 0x6750) != 0) &&
       (((*(long *)(param_5 + 0x30) != 0 &&
         (*(undefined8 **)(*(long *)(param_5 + 0x30) + 0x2c60) == param_2)) ||
        ((*(int *)(param_5 + 0x67b4) == 0x66707572 &&
         ((lVar8 = FUN_1004e0c3f(param_5,1), lVar8 != 0 &&
          (*(undefined8 **)(lVar8 + 0x2c60) == param_2)))))))) {
      if (param_1 == 0x68707267) {
        if (*(char *)(param_5 + 0x6ac9) == '\0') {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar7 = DAT_1008c75b8;
          cVar2 = _os_log_type_enabled(DAT_1008c75b8,2);
          if (cVar2 != '\0') {
            local_68 = 0;
            __os_log_impl(0x100000000,uVar7,2,"progress> showing sync progress bar",&local_68,2);
          }
          FUN_100528074(*(undefined8 *)(param_5 + 0x6750),1);
        }
      }
      else if (*(char *)(param_2 + 0x11c) == '\0') {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar7 = DAT_1008c75b8;
        cVar2 = _os_log_type_enabled(DAT_1008c75b8,2);
        if (cVar2 != '\0') {
          local_68 = 0;
          __os_log_impl(0x100000000,uVar7,2,"progress> hiding sync progress bar",&local_68,2);
        }
        FUN_100528d85(*(undefined8 *)(param_5 + 0x6750));
      }
    }
    goto LAB_10050923a;
  }
  if (param_1 < 0x63707267) {
    if (param_1 < 0x61706c69) {
      if (0x6170646b < param_1) {
        if (param_1 == 0x6170646c) {
          FUN_1002c4328(param_5,param_2,param_3,1);
        }
        else if (param_1 == 0x61706474) {
          FUN_1002c4328(param_5,param_2,param_3,0);
        }
        goto LAB_10050923a;
      }
      if (param_1 != 0x53706c69) {
        if ((param_1 == 0x616d6264) && (*(char *)(param_5 + 0x35a) != '\0')) {
          *(undefined1 *)(param_5 + 0x6ae8) = 0;
          FUN_1004e1698(param_5);
          uVar7 = FUN_1001c156e();
          FUN_1001c6987(uVar7,0x69706269,*(undefined4 *)(param_5 + 0x28),0,0);
        }
        goto LAB_10050923a;
      }
    }
    else if (param_1 < 0x63706368) {
      if (param_1 != 0x61706c69) {
        if (param_1 != 0x61747269) goto LAB_10050923a;
        goto LAB_10050991b;
      }
    }
    else {
      if (param_1 == 0x63706368) {
        if (*(char *)((long)param_2 + 0xad) != *(char *)(param_3 + 0xad)) {
          uVar7 = FUN_1001c156e();
          FUN_1001c6987(uVar7,0x69706c70,*(undefined4 *)(param_5 + 0x28),0,0);
        }
        goto LAB_10050923a;
      }
      if (param_1 != 0x63706c69) goto LAB_10050923a;
    }
  }
  else {
    if (0x64747268 < param_1) {
      if (param_1 < 0x68747269) {
        if (param_1 != 0x64747269) {
          if (param_1 != 0x68707267) goto LAB_10050923a;
          goto LAB_1005097c7;
        }
      }
      else if (param_1 != 0x68747269) {
        if ((((param_1 == 0x69706d64) && (*(int *)(param_5 + 0x28) == (int)param_2)) &&
            (iVar5 = _AMDeviceGetInterfaceType(param_3), iVar5 == 1)) &&
           ((cVar2 = FUN_10050b533(param_5), cVar2 != '\0' &&
            (cVar2 = FUN_10050b592(param_5), cVar2 == '\0')))) {
          FUN_10017848a(&local_68,FUN_10050b7d3,param_5);
          FUN_10050b7df(*(undefined4 *)(param_5 + 0x28),
                        CONCAT44(uStack_64,CONCAT22(uStack_66,local_68)));
        }
        goto LAB_10050923a;
      }
LAB_10050991b:
      if (param_2 == (undefined8 *)0x0) goto LAB_10050923a;
      lVar8 = param_2[2];
      if (*(int *)(lVar8 + 0x84) == 0x2062696c) {
        if (*(long *)(param_5 + 0x6748) != 0) {
          FUN_10052897c();
          if (*(long *)(param_5 + 0x6748) != 0) {
            uVar7 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar7,0x10);
            if (cVar2 != '\0') {
              local_68 = 0x202;
              uStack_66 = 0x822;
              uStack_64 = 0x7a0a90;
              uStack_60 = 1;
              local_5c = 0x822;
              local_5a = "handlerData->completeProgressBar == nullptr";
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
            }
            FUN_1001782e9(0,0);
          }
          *(undefined8 *)(param_5 + 0x6748) = 0;
        }
        if (param_1 < 0x68747269) {
          if (param_1 == 0x61747269) {
LAB_100509d4a:
            if ((*(char *)(param_5 + 0x39c) != '\0') &&
               (cVar2 = FUN_1002bd03f(param_2,*(undefined1 *)(param_5 + 0x39e),
                                      *(undefined1 *)(param_5 + 0x39d)), cVar2 != '\0')) {
              *(undefined1 *)(param_5 + 0x159c0) = 1;
            }
            if (param_1 == 0x68747269) goto LAB_100509d8b;
          }
          if (param_1 != 0x64747269) goto LAB_10050923a;
        }
        else if (param_1 != 0x68747269) {
          if (param_1 != 0x73747269) goto LAB_10050923a;
          goto LAB_100509d4a;
        }
LAB_100509d8b:
        if ((((*(char *)(param_5 + 0x35c) != '\0') && (*(char *)(param_5 + 0x6abf) != '\0')) &&
            (*(char *)(param_5 + 0x6ad5) == '\0')) &&
           (lVar9 = FUN_100307b9e(*(undefined8 *)(param_5 + 0x30),*param_2), lVar9 != 0)) {
          *(undefined1 *)(param_5 + 0x6ad5) = 1;
          FUN_10050a6f5(param_5,FUN_10050a859);
        }
      }
      else {
        if (param_1 < 0x68747269) {
          if (param_1 == 0x61747269) {
LAB_100509ce5:
            uVar10 = FUN_1004744bf(param_2,0);
            if ((((uVar10 & 0x10000) == 0 && (uVar10 & 0x200004) != 0) &&
                (*(char *)(param_5 + 0x14cda) == '\0')) && (*(char *)(param_5 + 0x6acf) == '\0')) {
              FUN_10050a92b(param_5,param_2,param_4);
            }
            goto LAB_10050a44f;
          }
          if (param_1 != 0x64747269) goto LAB_10050923a;
        }
        else if (param_1 != 0x68747269) {
          if (param_1 != 0x73747269) goto LAB_10050923a;
          goto LAB_100509ce5;
        }
        if (((*(char *)(param_5 + 0x6ac5) != '\0') && (lVar9 = FUN_1004e0c3f(param_5,1), lVar9 != 0)
            ) && (lVar1 = param_2[0x30], lVar9 = FUN_100309008(lVar9), lVar1 == lVar9)) {
          uVar10 = FUN_1004744bf(param_2,0);
          if ((uVar10 & 0x200004) == 0) {
            if (*(char *)(param_5 + 0x6abf) != '\0') {
              if ((uVar10 & 1) == 0) {
                if ((uVar10 & 0x402) == 0) {
                  if ((uVar10 & 0x40) == 0) {
                    if ((uVar10 & 8) == 0) {
                      if ((uVar10 & 0xc00000) == 0) goto LAB_10050a44f;
                      cVar2 = FUN_1002c10ef(*(undefined8 *)(param_5 + 0x15370),param_2[0x31]);
                    }
                    else {
                      cVar2 = FUN_1002c10ef(*(undefined8 *)(param_5 + 0x15360),param_2[0x31]);
                    }
                  }
                  else {
                    cVar2 = FUN_1002c10ef(*(undefined8 *)(param_5 + 0x15348),param_2[0x31]);
                  }
                }
                else {
                  cVar2 = FUN_1002c10ef(*(undefined8 *)(param_5 + 0x15330),param_2[0x31]);
                }
              }
              else {
                cVar2 = FUN_1002c10ef(*(undefined8 *)(param_5 + 0x152f0),param_2[0x31]);
              }
              goto LAB_10050a3b8;
            }
          }
          else if (((uVar10 & 4) != 0) && (*(char *)(param_5 + 0x6ac2) != '\0')) {
            cVar2 = FUN_1002c10ef(*(undefined8 *)(param_5 + 0x15320),param_2[0x31]);
LAB_10050a3b8:
            if (cVar2 != '\0') {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar7 = DAT_1008c75b8;
              cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar2 != '\0') {
                FUN_100476ac1(&local_68,param_2);
                local_74 = FUN_1001b83ae(&local_68);
                local_78 = 0x8220102;
                __os_log_impl(0x100000000,uVar7,1,
                              "sync> removed track \"%{public}s\" from sync settings",&local_78,0xc)
                ;
                FUN_1001b7a50(&local_68);
              }
              uVar7 = FUN_1001c156e();
              FUN_1001c6987(uVar7,0x69707372,*(undefined4 *)(param_5 + 0x28),0,0);
            }
          }
        }
      }
LAB_10050a44f:
      if (((param_1 == 0x68747269) || (param_1 == 0x64747269)) &&
         ((*(char *)(param_5 + 0x379) != '\0' && (cVar2 = FUN_1002bd28d(param_2), cVar2 != '\0'))))
      {
        if (lVar8 == *(long *)(param_5 + 0x30)) {
          bVar3 = FUN_1002c10ef(*(undefined8 *)(param_5 + 0x15388),*param_2);
          bVar4 = FUN_1002c10ef(*(undefined8 *)(param_5 + 0x15390),*param_2);
          bVar3 = (bVar4 | bVar3) & 1;
        }
        else {
          if (*(int *)(lVar8 + 0x84) != 0x2062696c) goto LAB_10050923a;
          bVar3 = FUN_1002c10ef(*(undefined8 *)(param_5 + 0x15380),*param_2);
        }
        if (bVar3 != 0) {
          uVar7 = FUN_1001c156e();
          FUN_1001c6987(uVar7,0x69707372,*(undefined4 *)(param_5 + 0x28),0,0);
        }
      }
      goto LAB_10050923a;
    }
    if (param_1 < 0x64706c69) {
      if (param_1 != 0x63707267) {
        if (((param_1 == 0x63736866) && (*(char *)(param_5 + 0x35c) != '\0')) &&
           (*(char *)(param_5 + 0x6abf) != '\0')) {
          if (param_2 == (undefined8 *)0x0) {
            lVar8 = 0;
          }
          else {
            lVar8 = param_2[1];
          }
          if ((lVar8 == *(long *)(param_5 + 0x30)) && (*(char *)(param_5 + 0x6ad5) == '\0')) {
            *(undefined1 *)(param_5 + 0x6ad5) = 1;
            FUN_10050a6f5(param_5,FUN_10050a859);
          }
        }
        goto LAB_10050923a;
      }
      goto LAB_1005097c7;
    }
    if (param_1 != 0x64706c69) {
      if (param_1 == 0x64707267) {
        lVar8 = *(long *)(param_5 + 0x30);
        if ((lVar8 == 0) || (*(undefined8 **)(lVar8 + 0x2c60) != param_2)) {
          if ((*(undefined8 **)(param_5 + 0x6750) == param_2) &&
             ((*(int *)(param_5 + 0x67b4) == 0x66696e69 ||
              (*(int *)(param_5 + 0x67b4) == 0x63616e63)))) {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar7 = DAT_1008c75b8;
            cVar2 = _os_log_type_enabled(DAT_1008c75b8,2);
            if (cVar2 != '\0') {
              local_68 = 0;
              __os_log_impl(0x100000000,uVar7,2,"progress> clearing sync operation",&local_68,2);
            }
            *(undefined4 *)(param_5 + 0x67b4) = 0;
          }
        }
        else {
          if (*(int *)(param_5 + 0x6b10) == 0) {
            if ((*(byte *)(lVar8 + 0x2be0) & 0x40) == 0) {
              *(undefined4 *)(param_5 + 0x67b4) = 0x66696e69;
            }
            else {
              *(undefined4 *)(param_5 + 0x67b4) = 0x63616e63;
            }
          }
          else {
            *(undefined4 *)(param_5 + 0x67b4) = 0x72657374;
          }
          FUN_10023318f(param_5,"");
        }
        if (*(undefined8 **)(param_5 + 0x6740) == param_2) {
          *(undefined8 *)(param_5 + 0x6740) = 0;
        }
        else if (*(undefined8 **)(param_5 + 0x6748) == param_2) {
          *(undefined8 *)(param_5 + 0x6748) = 0;
        }
        else if (*(undefined8 **)(param_5 + 0x6750) == param_2) {
          *(undefined8 *)(param_5 + 0x6750) = 0;
        }
        else if (*(undefined8 **)(param_5 + 0x6758) == param_2) {
          *(undefined8 *)(param_5 + 0x6758) = 0;
        }
      }
      goto LAB_10050923a;
    }
  }
  if ((((*(long *)(param_5 + 0x16640) != 0) && (*(char *)(param_5 + 0x14dc9) != '\0')) &&
      (*(char *)(param_5 + 0x38b) != '\0')) &&
     ((*(char *)(param_5 + 0x38c) == '\0' || (cVar2 = FUN_100537ef0(0), cVar2 != '\0')))) {
    if (param_1 < 0x63706c69) {
      if ((param_1 == 0x53706c69) || (param_1 == 0x61706c69)) {
        FUN_1005ad230(*(undefined8 *)(param_5 + 0x16640),param_2,0);
      }
    }
    else if (param_1 == 0x63706c69) {
      cVar2 = FUN_10053916d(param_3,2);
      if (cVar2 != '\0') {
        FUN_1005ad43a(*(undefined8 *)(param_5 + 0x16640),param_2);
      }
    }
    else if (param_1 == 0x64706c69) {
      FUN_1005ad642(*(undefined8 *)(param_5 + 0x16640),param_2);
    }
  }
LAB_10050923a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

