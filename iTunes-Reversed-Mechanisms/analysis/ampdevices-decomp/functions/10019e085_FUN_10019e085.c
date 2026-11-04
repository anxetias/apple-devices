// name: FUN_10019e085
// address: 10019e085

void FUN_10019e085(long *param_1,char param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  double dVar12;
  long local_70;
  int local_68;
  long local_60;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  FUN_1001eed65(param_1 + 3);
  if (*param_1 == 0) {
LAB_10019e137:
    lVar6 = param_1[0xb];
    if (lVar6 != 0) {
      lVar11 = param_1[0x17];
      if (0x1f3fffff < lVar11) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          FUN_10069b158(uVar5);
        }
        FUN_1001782e9(0,0);
        lVar6 = param_1[0xb];
        lVar11 = param_1[0x17];
      }
      FUN_10017103d(lVar6,lVar11);
    }
    *(int *)(param_1 + 9) = param_3;
    if (param_1[0x26] != 0) {
      dVar12 = (double)_CFAbsoluteTimeGetCurrent();
      *(int *)(param_1[0x26] + 8) =
           (int)(long)(dVar12 + *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008);
    }
    if (param_1[10] == 0) {
      iVar3 = (int)param_1[9];
      if (((iVar3 + 0x2673U < 0x25) &&
          ((0x18f0000001U >> ((ulong)(iVar3 + 0x2673U) & 0x3f) & 1) != 0)) || (iVar3 + 0x4b4U < 4))
      {
        if ((*(byte *)((long)param_1 + 0x45) & 0x20) == 0) {
          if ((DAT_100890760 == (code *)0x0) || (cVar2 = (*DAT_100890760)(), cVar2 == '\0')) {
            uVar9 = FUN_100171c60(param_1[0x12]);
            uVar5 = FUN_100174812(uVar9);
            FUN_1001c38e0("got error %d for URL %@",(int)param_1[9],uVar9);
            if (DAT_1008907c8 == 0) {
              DAT_1008907c8 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
              if (DAT_1008907c8 == 0) {
                uVar10 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar10,0x10);
                if (cVar2 != '\0') {
                  FUN_10069b3a6(uVar10);
                }
              }
              else {
                DAT_1008907d0 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
                if (DAT_1008907d0 != 0) goto LAB_10019e272;
                uVar10 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar10,0x10);
                if (cVar2 != '\0') {
                  FUN_10069b330(uVar10);
                }
              }
              FUN_1001782e9(0,0);
            }
            else {
LAB_10019e272:
              lVar6 = DAT_1008907c8;
              uVar10 = FUN_10017076e(DAT_1008907c8);
              cVar2 = FUN_100170781(lVar6,0,uVar10,uVar5);
              lVar6 = DAT_1008907d0;
              if (cVar2 != '\0') {
LAB_10019e292:
                FUN_10017060f(uVar9);
                FUN_10017060f(uVar5);
                goto LAB_10019e2a2;
              }
              uVar10 = FUN_10017076e(DAT_1008907d0);
              cVar2 = FUN_100170781(lVar6,0,uVar10,uVar5);
              if (cVar2 == '\0') {
                pcVar8 = (code *)FUN_1001644fd();
                if ((pcVar8 != (code *)0x0) &&
                   (cVar2 = (*pcVar8)(uVar9,(int)param_1[9]), cVar2 != '\0')) {
                  FUN_1001709a5(DAT_1008907c8,uVar5);
                  goto LAB_10019e292;
                }
                FUN_1001709a5(DAT_1008907d0,uVar5);
              }
            }
            FUN_10017060f(uVar9);
LAB_10019e732:
            FUN_10017060f(uVar5);
          }
          else {
LAB_10019e2a2:
            *(byte *)((long)param_1 + 0x45) = *(byte *)((long)param_1 + 0x45) | 0x20;
            cVar2 = FUN_10019ec2b(param_1,param_1[0x12]);
            if (cVar2 != '\0') {
              return;
            }
          }
        }
        else {
          pcVar8 = (code *)FUN_1001644fd();
          if (pcVar8 != (code *)0x0) {
            uVar5 = FUN_100171c60(param_1[0x12]);
            (*pcVar8)(uVar5,(int)param_1[9]);
            goto LAB_10019e732;
          }
        }
        goto LAB_10019e737;
      }
    }
    else {
      iVar3 = FUN_100171ce8();
      if (iVar3 == 0x191) {
        bVar1 = *(byte *)((long)param_1 + 0x44) & 8;
joined_r0x00010019e2c6:
        if (bVar1 == 0) {
          if (*(int *)((long)param_1 + 0x13c) == iVar3) {
            if (4 < *(uint *)(param_1 + 0x27)) goto LAB_10019e544;
          }
          else {
            *(int *)((long)param_1 + 0x13c) = iVar3;
            *(undefined4 *)(param_1 + 0x27) = 0;
          }
          uVar5 = FUN_10016af24(*param_1);
          lVar6 = FUN_100163d83(param_1[0x12],param_1[0x11]);
          cVar2 = FUN_1001643df(param_1[10],uVar5,lVar6);
          if ((cVar2 == '\0') ||
             (cVar2 = FUN_100164378(param_1[0x12],param_1[10],lVar6,(int)param_1[0x27]),
             cVar2 == '\0')) {
            cVar2 = '\0';
          }
          else {
            *(int *)(param_1 + 0x27) = (int)param_1[0x27] + 1;
            cVar2 = FUN_10019ec2b(param_1,param_1[0x12]);
          }
          FUN_10017060f(uVar5);
          goto LAB_10019e536;
        }
      }
      else {
        if (iVar3 == 0x197) {
          bVar1 = *(byte *)((long)param_1 + 0x44) & 4;
          goto joined_r0x00010019e2c6;
        }
        if (((iVar3 == 0x130 || 99 < iVar3 - 300U) || ((*(byte *)((long)param_1 + 0x44) & 2) == 0))
           || (lVar6 = FUN_100171a6c(param_1[10],PTR_cf_Location_10083c500), lVar6 == 0))
        goto LAB_10019e544;
        lVar11 = param_1[0x15];
        lVar7 = FUN_10017076e(lVar11);
        local_38 = FUN_100170853(lVar11,lVar7 + -1);
        if (local_38 == 0) {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            FUN_10069b1ce(uVar5);
          }
          FUN_1001782e9(0,0);
        }
        local_40 = FUN_1001737f8(lVar6);
        lVar11 = local_40 + 1;
        lVar7 = FUN_1001c63e1(lVar11);
        local_48 = lVar6;
        if (lVar7 == 0) {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            FUN_10069b244(uVar5);
          }
          FUN_1001782e9(0,0);
LAB_10019e6b5:
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            FUN_10069b2ba(uVar5);
          }
          cVar2 = '\0';
          FUN_1001782e9(0,0);
          lVar6 = local_48;
        }
        else {
          uVar5 = 0x8000100;
          cVar2 = FUN_10017393c(lVar6,lVar7,lVar11,0x8000100);
          if (cVar2 == '\0') {
            uVar5 = 0x201;
            cVar2 = FUN_10017393c(local_48,lVar7,lVar11,0x201);
            if (cVar2 == '\0') {
              FUN_1001c64c1(lVar7);
              goto LAB_10019e6b5;
            }
          }
          lVar6 = FUN_100174501(DAT_1008c4d90,lVar7,local_40,uVar5,local_38,1);
          FUN_1001c64c1(lVar7);
          if (lVar6 == 0) goto LAB_10019e6b5;
          lVar11 = param_1[0x15];
          uVar5 = FUN_10017076e(lVar11);
          cVar2 = FUN_100170781(lVar11,0,uVar5,lVar6);
          if (cVar2 == '\0') {
            FUN_1001709a5(param_1[0x15],lVar6);
            lVar11 = param_1[0x12];
            local_38 = lVar6;
            uVar5 = FUN_100171ca4(lVar11);
            uVar9 = FUN_100171973(lVar11);
            uVar10 = FUN_100170651(lVar11);
            local_40 = FUN_100171969(uVar10,uVar5,local_38,uVar9);
            FUN_10017060f(uVar5);
            lVar7 = local_40;
            FUN_10017060f(uVar9);
            if (lVar7 == 0) {
              cVar2 = '\0';
              lVar6 = local_38;
            }
            else {
              local_50 = lVar11;
              lVar6 = FUN_1001719b7(lVar11);
              if (lVar6 != 0) {
                FUN_1001719fb(lVar7,lVar6);
                FUN_10017060f(lVar6);
              }
              uVar5 = FUN_100171adf(local_50);
              FUN_1001714c2(uVar5,FUN_10019ecc9,lVar7);
              FUN_10017060f(uVar5);
              lVar6 = local_38;
              if ((*(byte *)((long)param_1 + 0x44) & 8) == 0) {
                FUN_100164329(lVar7,0);
              }
              if (param_1[0x1e] != 0) {
                uVar5 = FUN_10016af24(*param_1);
                (*(code *)param_1[0x1e])(param_1[0x1f],param_1[10],uVar5,lVar7);
                FUN_10017060f(uVar5);
              }
              if ((*(byte *)((long)param_1 + 0x45) & 0x18) != 0) {
                uVar5 = FUN_100171adf(param_1[10]);
                uVar9 = FUN_10016af24(*param_1);
                uVar10 = FUN_100174746(uVar9);
                FUN_100197dff(uVar5,uVar10);
                FUN_10017060f(uVar5);
                lVar7 = local_40;
                FUN_10017060f(uVar9);
                uVar5 = FUN_100197d52(lVar6);
                FUN_100171b23(lVar7,PTR_cf_Cookie_10083c4e0,uVar5);
                FUN_10017060f(uVar5);
              }
              *(undefined4 *)(param_1 + 0x27) = 0;
              cVar2 = FUN_10019ec2b(param_1,lVar7);
              FUN_10017060f(lVar7);
            }
          }
          else {
            *(undefined4 *)(param_1 + 9) = 0x2ee2;
            cVar2 = '\0';
          }
          FUN_10017060f(lVar6);
          lVar6 = local_48;
        }
LAB_10019e536:
        FUN_10017060f(lVar6);
        if (cVar2 != '\0') {
          return;
        }
      }
LAB_10019e544:
      if ((param_1[0x19] != 0) && ((iVar3 == 0x197 || (iVar3 == 0x191)))) {
        FUN_1001c62d9(&local_70,0x20);
        local_70 = param_1[10];
        local_60 = param_1[0x16];
        local_68 = iVar3;
        (*(code *)param_1[0x19])(0x68656472,&local_70,0,param_1 + 0x1a);
      }
LAB_10019e737:
      iVar3 = (int)param_1[9];
    }
    if (iVar3 != 0) goto LAB_10019e87e;
    if (param_1[0x25] != 0) {
      uVar5 = FUN_10016af24(*param_1);
      uVar9 = FUN_100174746(uVar5);
      uVar9 = FUN_1001705fc(uVar9);
      *(undefined8 *)param_1[0x25] = uVar9;
      FUN_10017060f(uVar5);
    }
    if (param_1[0xb] != 0) {
      uVar4 = *(uint *)((long)param_1 + 0x44);
      if ((uVar4 & 1) == 0) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          FUN_10069b41c(uVar5);
        }
        FUN_1001782e9(0,0);
        uVar4 = *(uint *)((long)param_1 + 0x44);
      }
      if ((uVar4 >> 0xe & 1) == 0) {
        iVar3 = FUN_100199321(param_1[10],param_1 + 0xb);
        if (iVar3 == -0x80) goto LAB_10019e87e;
        if (iVar3 != 0) {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            FUN_10069b492(iVar3,uVar5);
          }
          goto LAB_10019e87e;
        }
      }
      FUN_100105c62(&local_70);
      FUN_1001719fb(param_1[10],param_1[0xb]);
      FUN_100105c62(&local_70);
    }
    lVar6 = param_1[10];
    if ((*(byte *)((long)param_1 + 0x45) & 8) != 0) {
      uVar5 = FUN_100171adf(lVar6);
      uVar9 = FUN_10016af24(*param_1);
      uVar10 = FUN_100174746(uVar9);
      FUN_100197dff(uVar5,uVar10);
      FUN_10017060f(uVar5);
      FUN_10017060f(uVar9);
      lVar6 = param_1[10];
    }
    uVar5 = FUN_1001705fc(lVar6);
    *(undefined8 *)param_1[0x24] = uVar5;
    if (*(long *)param_1[0x24] != 0) goto LAB_10019e87e;
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_10069b4fe(uVar5);
    }
  }
  else {
    FUN_1001732be(*param_1,0,0,0);
    FUN_10017339b(*param_1,*(undefined8 *)(param_1[1] + 0x10),
                  *(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118);
    if (param_2 != '\0') {
      FUN_1001730da(*param_1);
    }
    if (param_3 != 0) goto LAB_10019e137;
    if (param_1[10] != 0) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        FUN_10069b06c(uVar5);
      }
      FUN_1001782e9(0,0);
    }
    lVar6 = FUN_1001731d8(*param_1,*(undefined8 *)PTR__kCFStreamPropertyHTTPResponseHeader_10082d668
                         );
    param_1[10] = lVar6;
    if (lVar6 != 0) goto LAB_10019e137;
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_10069b0e2(uVar5);
    }
  }
  FUN_1001782e9(0,0);
LAB_10019e87e:
  FUN_10017060f(param_1[0x11]);
  param_1[0x11] = 0;
  FUN_10017060f(param_1[0x15]);
  param_1[0x15] = 0;
  (*(code *)param_1[0x1d])(param_1[0x1f],(int)param_1[9]);
  return;
}

