// name: FUN_10019d30b
// address: 10019d30b

int FUN_10019d30b(long *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 local_40;
  undefined8 local_38;
  
  if (param_1 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_10069ac46(uVar4);
    }
LAB_10019d405:
    FUN_1001782e9(0,0);
    return -0x32;
  }
  if (param_1[0x12] == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_10069abd0(uVar4);
    }
    goto LAB_10019d405;
  }
  if (*param_1 != 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_10069a4ae(uVar4);
    }
    FUN_1001782e9(1,0);
  }
  if (param_1[0x13] == 0) {
    lVar5 = FUN_10016ae47(DAT_1008c4d90,param_1[0x12]);
    *param_1 = lVar5;
    if ((*(byte *)((long)param_1 + 0x46) & 0x10) != 0) {
      uVar4 = *(undefined8 *)PTR___kCFStreamPropertySocketImmediateBufferSize_10082d5a8;
      uVar6 = FUN_100171f60(DAT_1008c4d90,0xe);
      FUN_1001aad0a(&local_38,uVar6);
      FUN_10017324b(lVar5,uVar4,local_38);
      FUN_1001aae6c(&local_38);
      local_38 = 0x3fc99999a0000000;
      lVar5 = *param_1;
      uVar4 = *(undefined8 *)PTR___kCFStreamPropertySocketImmediateBufferTimeOut_10082d5b0;
      uVar6 = FUN_100171f60(DAT_1008c4d90,0xd,&local_38);
      FUN_1001aad0a(&local_40,uVar6);
      FUN_10017324b(lVar5,uVar4,local_40);
      FUN_1001aae6c(&local_40);
      lVar5 = *param_1;
    }
    if (lVar5 != 0) goto LAB_10019d4da;
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_10069ab5a(uVar4);
    }
  }
  else {
    lVar5 = FUN_10016aea0();
    *param_1 = lVar5;
    if (lVar5 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_10069a524(uVar4);
      }
    }
    else {
LAB_10019d4da:
      cVar1 = FUN_1001732be(lVar5,0x1b,FUN_10019da1d,param_1 + 0xc);
      if (cVar1 == '\0') {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          FUN_10069aae4(uVar4);
        }
      }
      else {
        lVar5 = *param_1;
        uVar2 = *(uint *)((long)param_1 + 0x44);
        if (lVar5 == 0) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            FUN_10069a59a(uVar4);
          }
          FUN_1001782e9(0,0);
        }
        if (((short)uVar2 < 0) &&
           (cVar1 = FUN_10017324b(lVar5,*(undefined8 *)PTR__kCFStreamNetworkServiceType_10082d628,
                                  *(undefined8 *)PTR__kCFStreamNetworkServiceTypeVoIP_10082d640),
           cVar1 == '\0')) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            FUN_10069a610(uVar4);
          }
          FUN_1001782e9(0,0);
        }
        if (((uVar2 >> 0x10 & 1) != 0) &&
           (cVar1 = FUN_10017324b(lVar5,*(undefined8 *)PTR__kCFStreamNetworkServiceType_10082d628,
                                  *(undefined8 *)PTR__kCFStreamNetworkServiceTypeVideo_10082d638),
           cVar1 == '\0')) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            FUN_10069a686(uVar4);
          }
          FUN_1001782e9(0,0);
        }
        if (((uVar2 >> 0x11 & 1) != 0) &&
           (cVar1 = FUN_10017324b(lVar5,*(undefined8 *)PTR__kCFStreamNetworkServiceType_10082d628,
                                  *(undefined8 *)
                                   PTR__kCFStreamNetworkServiceTypeBackground_10082d630),
           cVar1 == '\0')) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            FUN_10069a6fc(uVar4);
          }
          FUN_1001782e9(0,0);
        }
        if (((uVar2 >> 0x12 & 1) != 0) &&
           (cVar1 = FUN_10017324b(lVar5,*(undefined8 *)PTR__kCFStreamNetworkServiceType_10082d628,
                                  *(undefined8 *)PTR__kCFStreamNetworkServiceTypeVoice_10082d648),
           cVar1 == '\0')) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            FUN_10069a772(uVar4);
          }
          FUN_1001782e9(0,0);
        }
        uVar2 = *(uint *)((long)param_1 + 0x44);
        if (((uVar2 & 2) != 0) && (param_1[0x15] == 0)) {
          lVar5 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
          param_1[0x15] = lVar5;
          uVar4 = FUN_100171c60(param_1[0x12]);
          FUN_1001709a5(param_1[0x15],uVar4);
          FUN_10017060f(uVar4);
          uVar2 = *(uint *)((long)param_1 + 0x44);
        }
        if (((uVar2 & 0x10) != 0) &&
           (cVar1 = FUN_10017324b(*param_1,*(undefined8 *)
                                            PTR__kCFStreamPropertyHTTPAttemptPersistentConnection_10082d650
                                  ,*(undefined8 *)PTR__kCFBooleanTrue_10082e038), cVar1 == '\0')) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            FUN_10069a7e8(uVar4);
          }
          FUN_1001782e9(0,0);
        }
        if ((param_1[0x11] != 0) &&
           (cVar1 = FUN_10017324b(*param_1,*(undefined8 *)PTR__kCFStreamPropertyHTTPProxy_10082d660)
           , cVar1 == '\0')) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            FUN_10069a85e(uVar4);
          }
          FUN_1001782e9(0,0);
        }
        if ((*(byte *)((long)param_1 + 0x45) & 0x20) != 0) {
          if (DAT_100890790 == '\0') {
            FUN_10069a8d4();
          }
          if (DAT_1008907c0 == '\0') {
            FUN_10069a93a();
          }
          uVar4 = FUN_1001713ff(0,&DAT_100890770,&DAT_1008907a0,4,
                                PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                PTR__kCFTypeDictionaryValueCallBacks_10082e140);
          cVar1 = FUN_10017324b(*param_1,*(undefined8 *)PTR__kCFStreamPropertySSLSettings_10082d670,
                                uVar4);
          if (cVar1 == '\0') {
            uVar6 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar6,0x10);
            if (cVar1 != '\0') {
              FUN_10069a98c(uVar6);
            }
            FUN_1001782e9(0,0);
          }
          FUN_10017060f(uVar4);
        }
        lVar5 = FUN_1001ebd46();
        param_1[5] = lVar5;
        if (param_1[0x26] != 0) {
          dVar7 = (double)_CFAbsoluteTimeGetCurrent();
          *(int *)param_1[0x26] =
               (int)(long)(dVar7 + *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008);
        }
        FUN_100173302(*param_1,*(undefined8 *)(param_1[1] + 0x10),
                      *(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118);
        iVar3 = FUN_1001ee941(DAT_100700af8,0,0,*(undefined8 *)(param_1[1] + 0x10),FUN_10019deba,
                              param_1,param_1 + 3);
        if (iVar3 == -0x80) goto LAB_10019d92b;
        if (iVar3 != 0) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            FUN_10069aa78(iVar3,uVar4);
          }
          if (iVar3 == 0) {
            return 0;
          }
          goto LAB_10019d92b;
        }
        cVar1 = FUN_100173093(*param_1);
        if (cVar1 != '\0') {
          if (param_1[3] == 0) {
            return 0;
          }
          FUN_1001eeea0(DAT_10070f2b8);
          return 0;
        }
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          FUN_10069aa02(uVar4);
        }
      }
    }
  }
  FUN_1001782e9(0,0);
  iVar3 = -0x32;
LAB_10019d92b:
  FUN_10019e085(param_1,1,iVar3);
  return iVar3;
}

