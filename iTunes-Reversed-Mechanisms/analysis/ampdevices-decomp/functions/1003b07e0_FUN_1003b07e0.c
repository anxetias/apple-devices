// name: FUN_1003b07e0
// address: 1003b07e0

/* WARNING: Type propagation algorithm not settling */

int FUN_1003b07e0(uint *param_1,undefined8 param_2,uint *param_3,long param_4)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  char *pcVar10;
  ushort local_268;
  ushort local_266;
  uint local_264;
  ulong local_260;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined2 local_24c;
  int local_24a;
  uint local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 == 0) {
    uVar7 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar7,0x10);
    if (cVar1 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "metaData != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
    iVar4 = -0x32;
    goto LAB_1003b230a;
  }
  if (param_1 == (uint *)0x0) {
LAB_1003b1c43:
    iVar4 = FUN_1003b25c6(param_2,param_4);
    if (iVar4 == -0x80) goto LAB_1003b230a;
    if (iVar4 != 0) {
      uVar7 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar7,0x10);
      if (cVar1 == '\0') goto LAB_1003b230a;
      local_22a = (char *)CONCAT44(local_22a._4_4_,iVar4);
      goto LAB_1003b1d8f;
    }
    iVar4 = 0;
    if (param_3 == (uint *)0x0) goto LAB_1003b230a;
    uVar5 = *param_3;
    if ((uVar5 & 1) != 0) {
      if ((*(short **)(param_3 + 3) == (short *)0x0) || (**(short **)(param_3 + 3) == 0)) {
        FUN_1001cbec1(param_4,0x6c646573);
LAB_1003b1db4:
        uVar5 = *param_3;
        goto LAB_1003b1db7;
      }
      iVar4 = FUN_1001dfe99();
      uVar9 = (ulong)(iVar4 * 3 + 3);
      local_260 = uVar9;
      lVar8 = FUN_1001c63e1(uVar9);
      if (lVar8 == 0) {
LAB_1003b1fd9:
        uVar7 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar7,0x10);
        if (cVar1 != '\0') {
          local_238 = 0x8220202;
          local_234 = "Assertion failure";
          local_22c = 0x822;
          local_22a = "tempUTF8 != __null";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
        }
        FUN_1001782e9(0,0);
        iVar4 = -0x6c;
        goto LAB_1003b2445;
      }
      iVar4 = FUN_1001e73f2(*(undefined8 *)(param_3 + 3),iVar4,lVar8,uVar9,&local_260);
      if (iVar4 != 0) {
        FUN_1001c64c1(lVar8);
        goto LAB_1003b1db4;
      }
      *(undefined1 *)(lVar8 + local_260) = 0;
      iVar4 = FUN_1001cba64(param_4,0x6c646573,1,lVar8,local_260 & 0xffffffff);
      FUN_1001c64c1(lVar8);
      if (iVar4 == -0x80) goto LAB_1003b2445;
      if (iVar4 == 0) goto LAB_1003b1db4;
      uVar7 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar7,0x10);
      if (cVar1 == '\0') goto LAB_1003b2445;
      local_22a = (char *)CONCAT44(local_22a._4_4_,iVar4);
      goto LAB_1003b212b;
    }
LAB_1003b1db7:
    if ((uVar5 & 0x40) != 0) {
      if ((*(short **)(param_3 + 5) == (short *)0x0) || (**(short **)(param_3 + 5) == 0)) {
        FUN_1001cbec1(param_4,0x73646573);
LAB_1003b1e2c:
        uVar5 = *param_3;
        goto LAB_1003b1e2f;
      }
      iVar4 = FUN_1001dfe99();
      local_260 = (ulong)(iVar4 * 3 + 3);
      lVar8 = FUN_1001c63e1();
      if (lVar8 == 0) goto LAB_1003b1fd9;
      iVar4 = FUN_1001e73f2(*(undefined8 *)(param_3 + 5),iVar4,lVar8,local_260);
      if (iVar4 != 0) {
        FUN_1001c64c1(lVar8);
        goto LAB_1003b1e2c;
      }
      *(undefined1 *)(lVar8 + local_260) = 0;
      iVar4 = FUN_1001cba64(param_4,0x73646573,1,lVar8,local_260 & 0xffffffff);
      FUN_1001c64c1(lVar8);
      if (iVar4 != -0x80) {
        if (iVar4 == 0) goto LAB_1003b1e2c;
        uVar7 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar7,0x10);
        if (cVar1 != '\0') {
          local_22a = (char *)CONCAT44(local_22a._4_4_,iVar4);
          goto LAB_1003b212b;
        }
      }
      goto LAB_1003b2445;
    }
LAB_1003b1e2f:
    if ((uVar5 & 4) == 0) goto LAB_1003b1e37;
    iVar4 = FUN_1001c97e8(param_4,0x2d2d2d2d,"com.apple.iTunes",0x10,"iTunMOVI",8,&local_258);
    if (iVar4 == -0x80) goto LAB_1003b230a;
    if (iVar4 != 0) {
      uVar7 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar7,0x10);
      if (cVar1 != '\0') {
        local_22a = (char *)CONCAT44(local_22a._4_4_,iVar4);
        goto LAB_1003b212b;
      }
      goto LAB_1003b2445;
    }
    pcVar10 = *(char **)(param_3 + 7);
    if ((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) {
      if (CONCAT44(uStack_254,local_258) != 0) {
        iVar4 = FUN_1001c9e7d(param_4);
        if (iVar4 == -0x80) goto LAB_1003b230a;
        if (iVar4 != 0) {
          uVar7 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar7,0x10);
          if (cVar1 != '\0') {
            local_22a = (char *)CONCAT44(local_22a._4_4_,iVar4);
            goto LAB_1003b212b;
          }
          goto LAB_1003b2445;
        }
      }
LAB_1003b1e37:
      uVar5 = *param_3;
      if ((uVar5 & 0x10) == 0) {
LAB_1003b1e66:
        iVar4 = 0;
        if ((uVar5 & 8) == 0) goto LAB_1003b230a;
        iVar4 = FUN_1003b0547(param_4,*(undefined8 *)(param_3 + 9));
        if ((iVar4 != -0x80) && (iVar4 != 0)) {
          uVar7 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar7,0x10);
          if (cVar1 != '\0') {
            local_22a = (char *)CONCAT44(local_22a._4_4_,iVar4);
            goto LAB_1003b212b;
          }
        }
      }
      else {
        iVar4 = FUN_1003af9ea(param_4,*(undefined8 *)(param_3 + 0xb),0,0);
        if (iVar4 == -0x80) goto LAB_1003b230a;
        if (iVar4 == 0) {
          uVar5 = *param_3;
          goto LAB_1003b1e66;
        }
        uVar7 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar7,0x10);
        if (cVar1 != '\0') {
          local_22a = (char *)CONCAT44(local_22a._4_4_,iVar4);
          goto LAB_1003b212b;
        }
      }
    }
    else {
      lVar8 = CONCAT44(uStack_254,local_258);
      if (lVar8 != 0) {
LAB_1003b1f50:
        uVar6 = FUN_1001dfc0d(pcVar10);
        iVar4 = FUN_1001cacbc(lVar8,1,1,pcVar10,uVar6);
        if (iVar4 == -0x80) goto LAB_1003b230a;
        if (iVar4 != 0) {
          uVar7 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar7,0x10);
          if (cVar1 != '\0') {
            local_22a = (char *)CONCAT44(local_22a._4_4_,iVar4);
            goto LAB_1003b212b;
          }
          goto LAB_1003b2445;
        }
        goto LAB_1003b1e37;
      }
      iVar4 = FUN_1001c9b1d(param_4,&local_258);
      if (iVar4 == -0x80) goto LAB_1003b230a;
      if (iVar4 == 0) {
        iVar4 = FUN_1001c9f0c(CONCAT44(uStack_254,local_258),0x2d2d2d2d,"com.apple.iTunes",0x10);
        if (iVar4 == -0x80) goto LAB_1003b230a;
        if (iVar4 == 0) {
          iVar4 = FUN_1001ca240(CONCAT44(uStack_254,local_258),"iTunMOVI",8);
          if (iVar4 == -0x80) goto LAB_1003b230a;
          if (iVar4 == 0) {
            lVar8 = CONCAT44(uStack_254,local_258);
            pcVar10 = *(char **)(param_3 + 7);
            goto LAB_1003b1f50;
          }
          uVar7 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar7,0x10);
          if (cVar1 != '\0') {
            local_22a = (char *)CONCAT44(local_22a._4_4_,iVar4);
            goto LAB_1003b212b;
          }
        }
        else {
          uVar7 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar7,0x10);
          if (cVar1 != '\0') {
            local_22a = (char *)CONCAT44(local_22a._4_4_,iVar4);
            goto LAB_1003b212b;
          }
        }
        goto LAB_1003b2445;
      }
      uVar7 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar7,0x10);
      if (cVar1 == '\0') goto LAB_1003b2445;
      local_22a = (char *)CONCAT44(local_22a._4_4_,iVar4);
LAB_1003b212b:
      local_22c = 0x400;
      local_234 = "Assertion failure";
      local_238 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_238,0x12);
    }
LAB_1003b2445:
    if ((iVar4 == -0x80) || (iVar4 == 0)) goto LAB_1003b230a;
    uVar7 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar7,0x10);
    if (cVar1 == '\0') goto LAB_1003b230a;
    local_22a = (char *)CONCAT44(local_22a._4_4_,iVar4);
  }
  else {
    uVar5 = *param_1;
    if ((uVar5 & 1) != 0) {
      iVar4 = FUN_1001cb009(param_4,0xa96e616d,param_1 + 2);
      if (iVar4 != -0x80) {
        if (iVar4 == 0) {
          uVar5 = *param_1;
          goto LAB_1003b0851;
        }
        uVar7 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar7,0x10);
        goto joined_r0x0001003b139f;
      }
      goto LAB_1003b121f;
    }
LAB_1003b0851:
    if ((uVar5 & 4) != 0) {
      iVar4 = FUN_1001cb009(param_4,0xa9415254,param_1 + 0x102);
      if (iVar4 == -0x80) goto LAB_1003b121f;
      if (iVar4 == 0) {
        uVar5 = *param_1;
        goto LAB_1003b0881;
      }
      uVar7 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar7,0x10);
      goto joined_r0x0001003b18ab;
    }
LAB_1003b0881:
    if ((uVar5 >> 0x1e & 1) != 0) {
      iVar4 = FUN_1001cb009(param_4,0x61415254,param_1 + 0x516);
      if (iVar4 == -0x80) goto LAB_1003b121f;
      if (iVar4 != 0) {
        uVar7 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar7,0x10);
        goto joined_r0x0001003b18ab;
      }
      uVar5 = *param_1;
    }
    if ((uVar5 >> 0x15 & 1) != 0) {
      iVar4 = FUN_1001cb009(param_4,0xa9777274,param_1 + 0x410);
      if (iVar4 == -0x80) goto LAB_1003b121f;
      if (iVar4 != 0) {
        uVar7 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar7,0x10);
        goto joined_r0x0001003b18ab;
      }
      uVar5 = *param_1;
    }
    if ((uVar5 & 8) != 0) {
      iVar4 = FUN_1001cb009(param_4,0xa9616c62,param_1 + 0x182);
      if (iVar4 == -0x80) goto LAB_1003b121f;
      if (iVar4 != 0) {
        uVar7 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar7,0x10);
        goto joined_r0x0001003b18ab;
      }
      uVar5 = *param_1;
    }
    if ((uVar5 >> 0x1c & 1) != 0) {
      iVar4 = FUN_1001cb009(param_4,0xa9677270,param_1 + 0x495);
      if (iVar4 == -0x80) goto LAB_1003b121f;
      if (iVar4 != 0) {
        uVar7 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar7,0x10);
        goto joined_r0x0001003b139f;
      }
      uVar5 = *param_1;
    }
    if ((uVar5 & 0x10) == 0) {
LAB_1003b0d77:
      uVar5 = *param_1;
      if ((uVar5 & 0x40) != 0) {
        local_268 = 0;
        local_266 = (ushort)param_1[0x402] << 8 | (ushort)param_1[0x402] >> 8;
        local_264 = 0;
        iVar4 = FUN_1001c955b(param_4,0x74726b6e,0,0,&local_260);
        if (iVar4 == -0x80) goto LAB_1003b1c30;
        if (iVar4 != 0) {
          uVar7 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar7,0x10);
          goto joined_r0x0001003b18ab;
        }
        if (param_1[0x402] == 0) {
          if (local_260 != 0) {
            iVar4 = FUN_1001c9e7d(param_4);
            if (iVar4 == -0x80) goto LAB_1003b1c30;
            if (iVar4 != 0) {
              uVar7 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar7,0x10);
              goto joined_r0x0001003b18ab;
            }
          }
LAB_1003b137f:
          uVar5 = *param_1;
          goto LAB_1003b0d83;
        }
        if (param_1[0x402] <= param_1[0x403]) {
          uVar3 = (ushort)param_1[0x403];
          local_264 = CONCAT22(local_264._2_2_,uVar3 << 8 | uVar3 >> 8);
        }
        if (local_260 == 0) {
          iVar4 = FUN_1001c9b1d(param_4,&local_260);
          if (iVar4 == -0x80) goto LAB_1003b1c30;
          if (iVar4 == 0) {
            iVar4 = FUN_1001c9f0c(local_260,0x74726b6e,0,0);
            if (iVar4 == -0x80) goto LAB_1003b1c30;
            if (iVar4 == 0) goto LAB_1003b0f6d;
            uVar7 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar7,0x10);
          }
          else {
            uVar7 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar7,0x10);
          }
          goto joined_r0x0001003b18ab;
        }
LAB_1003b0f6d:
        iVar4 = FUN_1001cacbc(local_260,1,0,&local_268,8);
        if (iVar4 != -0x80) {
          if (iVar4 == 0) goto LAB_1003b137f;
          uVar7 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar7,0x10);
          goto joined_r0x0001003b18ab;
        }
        goto LAB_1003b1c30;
      }
LAB_1003b0d83:
      if ((uVar5 >> 0x17 & 1) != 0) {
        local_268 = 0;
        local_266 = (ushort)param_1[0x491] << 8 | (ushort)param_1[0x491] >> 8;
        local_264 = local_264 & 0xffff0000;
        iVar4 = FUN_1001c955b(param_4,0x6469736b,0,0,&local_260);
        if (iVar4 == -0x80) goto LAB_1003b1c30;
        if (iVar4 != 0) {
          uVar7 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar7,0x10);
          goto joined_r0x0001003b18ab;
        }
        if ((ushort)param_1[0x491] == 0) {
          if (local_260 != 0) {
            iVar4 = FUN_1001c9e7d(param_4);
            if (iVar4 == -0x80) goto LAB_1003b1c30;
            if (iVar4 != 0) {
              uVar7 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar7,0x10);
              goto joined_r0x0001003b18ab;
            }
          }
LAB_1003b1537:
          uVar5 = *param_1;
          goto LAB_1003b0d8d;
        }
        uVar3 = *(ushort *)((long)param_1 + 0x1246);
        if ((ushort)param_1[0x491] <= uVar3) {
          local_264 = CONCAT22(local_264._2_2_,uVar3 << 8 | uVar3 >> 8);
        }
        if (local_260 == 0) {
          iVar4 = FUN_1001c9b1d(param_4,&local_260);
          if (iVar4 != -0x80) {
            if (iVar4 == 0) {
              iVar4 = FUN_1001c9f0c(local_260,0x6469736b,0,0);
              if (iVar4 == -0x80) goto LAB_1003b1c30;
              if (iVar4 == 0) goto LAB_1003b1078;
              uVar7 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar7,0x10);
            }
            else {
              uVar7 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar7,0x10);
            }
            goto joined_r0x0001003b18ab;
          }
        }
        else {
LAB_1003b1078:
          iVar4 = FUN_1001cacbc(local_260,1,0,&local_268,6);
          if (iVar4 != -0x80) {
            if (iVar4 == 0) goto LAB_1003b1537;
            uVar7 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar7,0x10);
            goto joined_r0x0001003b18ab;
          }
        }
        goto LAB_1003b1c30;
      }
LAB_1003b0d8d:
      if ((char)uVar5 < '\0') {
        local_238 = local_238 & 0xffff0000;
        iVar4 = FUN_1001cb009(param_4,0xa9646179);
        if (iVar4 != -0x80) {
          if (iVar4 != 0) {
            uVar7 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar7,0x10);
            goto joined_r0x0001003b139f;
          }
          if ((short)param_1[0x404] != 0) {
            FUN_1001e1b6d((short)param_1[0x404],&local_238);
            if ((short)local_238 == 4) {
              iVar4 = FUN_1001cb009(param_4,0xa9646179,&local_238);
              if (iVar4 == -0x80) goto LAB_1003b121f;
              if (iVar4 != 0) {
                uVar7 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar7,0x10);
                goto joined_r0x0001003b18ab;
              }
            }
          }
          goto LAB_1003b0d95;
        }
LAB_1003b121f:
        iVar4 = -0x80;
        goto LAB_1003b230a;
      }
LAB_1003b0d95:
      uVar5 = *param_1;
      if ((uVar5 >> 10 & 1) != 0) {
        iVar4 = FUN_1001cb009(param_4,0xa9636d74,param_1 + 0x382);
        if (iVar4 == -0x80) goto LAB_1003b121f;
        if (iVar4 != 0) {
          uVar7 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar7,0x10);
          goto joined_r0x0001003b18ab;
        }
        uVar5 = *param_1;
      }
      if ((uVar5 >> 0x16 & 1) == 0) {
LAB_1003b0dd5:
        if ((uVar5 >> 0x1d & 1) == 0) {
LAB_1003b0ddf:
          if ((uVar5 >> 0x1b & 1) == 0) goto LAB_1003b1c43;
          local_268 = (ushort)param_1[0x494] << 8 | (ushort)param_1[0x494] >> 8;
          iVar4 = FUN_1001c955b(param_4,0x746d706f,0,0,&local_260);
          if (iVar4 != -0x80) {
            if (iVar4 != 0) {
              uVar7 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar7,0x10);
              if (cVar1 != '\0') {
                local_258 = 0x8220202;
                uStack_254 = 0x7a0a90;
                uStack_250 = 1;
                local_24c = 0x400;
                local_24a = iVar4;
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_258,0x12
                                   );
              }
              if (iVar4 != 0) goto LAB_1003b1c30;
            }
            if (local_260 != 0) goto LAB_1003b0e59;
            iVar4 = FUN_1001c9b1d(param_4,&local_260);
            if (iVar4 != -0x80) {
              if (iVar4 != 0) {
                uVar7 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar7,0x10);
                if (cVar1 != '\0') {
                  local_258 = 0x8220202;
                  uStack_254 = 0x7a0a90;
                  uStack_250 = 1;
                  local_24c = 0x400;
                  local_24a = iVar4;
                  __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_258,
                                      0x12);
                }
                if (iVar4 != 0) goto LAB_1003b1c30;
              }
              iVar4 = FUN_1001c9f0c(local_260,0x746d706f,0,0);
              if (iVar4 != -0x80) {
                if (iVar4 != 0) {
                  uVar7 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar7,0x10);
                  if (cVar1 != '\0') {
                    local_258 = 0x8220202;
                    uStack_254 = 0x7a0a90;
                    uStack_250 = 1;
                    local_24c = 0x400;
                    local_24a = iVar4;
                    __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_258,
                                        0x12);
                  }
                  if (iVar4 != 0) goto LAB_1003b1c30;
                }
LAB_1003b0e59:
                iVar4 = FUN_1001cacbc(local_260,1,0x15,&local_268,2);
                if ((iVar4 != -0x80) && (iVar4 != 0)) {
                  uVar7 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar7,0x10);
                  goto joined_r0x0001003b18ab;
                }
              }
            }
          }
        }
        else {
          local_268 = CONCAT11(local_268._1_1_,*(undefined1 *)((long)param_1 + 0x1241));
          iVar4 = FUN_1001c955b(param_4,0x70676170,0,0,&local_260);
          if (iVar4 == -0x80) goto LAB_1003b1c30;
          if (iVar4 != 0) {
            uVar7 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar7,0x10);
            goto joined_r0x0001003b18ab;
          }
          if (local_260 == 0) {
            iVar4 = FUN_1001c9b1d(param_4,&local_260);
            if (iVar4 != -0x80) {
              if (iVar4 == 0) {
                iVar4 = FUN_1001c9f0c(local_260,0x70676170,0,0);
                if (iVar4 == -0x80) goto LAB_1003b1c30;
                if (iVar4 == 0) goto LAB_1003b14d4;
                uVar7 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar7,0x10);
              }
              else {
                uVar7 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar7,0x10);
              }
              goto joined_r0x0001003b18ab;
            }
          }
          else {
LAB_1003b14d4:
            iVar4 = FUN_1001cacbc(local_260,1,0x15,&local_268,1);
            if (iVar4 != -0x80) {
              if (iVar4 == 0) {
                uVar5 = *param_1;
                goto LAB_1003b0ddf;
              }
              uVar7 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar7,0x10);
              goto joined_r0x0001003b18ab;
            }
          }
        }
        goto LAB_1003b1c30;
      }
      local_268 = CONCAT11(local_268._1_1_,(char)param_1[0x490]);
      iVar4 = FUN_1001c955b(param_4,0x6370696c,0,0,&local_260);
      if (iVar4 == -0x80) goto LAB_1003b1c30;
      if (iVar4 == 0) {
        if (local_260 == 0) {
          iVar4 = FUN_1001c9b1d(param_4,&local_260);
          if (iVar4 != -0x80) {
            if (iVar4 == 0) {
              iVar4 = FUN_1001c9f0c(local_260,0x6370696c,0,0);
              if (iVar4 == -0x80) goto LAB_1003b1c30;
              if (iVar4 == 0) goto LAB_1003b131c;
              uVar7 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar7,0x10);
            }
            else {
              uVar7 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar7,0x10);
            }
            goto joined_r0x0001003b18ab;
          }
        }
        else {
LAB_1003b131c:
          iVar4 = FUN_1001cacbc(local_260,1,0x15,&local_268,1);
          if (iVar4 != -0x80) {
            if (iVar4 == 0) {
              uVar5 = *param_1;
              goto LAB_1003b0dd5;
            }
            uVar7 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar7,0x10);
            goto joined_r0x0001003b18ab;
          }
        }
      }
      else {
        uVar7 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar7,0x10);
joined_r0x0001003b18ab:
        if (cVar1 != '\0') goto LAB_1003b1c1d;
      }
    }
    else {
      iVar4 = FUN_1001c955b(param_4,0xa967656e,0,0,&local_260);
      if (local_260 != 0 && iVar4 == 0) {
        FUN_1001c9e7d(param_4);
      }
      iVar4 = FUN_1001c955b(param_4,0x676e7265,0,0,&local_260);
      if (local_260 != 0 && iVar4 == 0) {
        FUN_1001c9e7d(param_4);
      }
      FUN_1001e1c39(param_1 + 0x202,&local_238);
      if ((short)local_238 == 0) goto LAB_1003b0d77;
      sVar2 = FUN_1003ad4b1(&local_238);
      if (sVar2 == 0) {
        iVar4 = FUN_1001cb009(param_4,0xa967656e,&local_238);
        if (iVar4 == -0x80) goto LAB_1003b121f;
        if (iVar4 != 0) {
          uVar7 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar7,0x10);
          goto joined_r0x0001003b139f;
        }
        goto LAB_1003b0d77;
      }
      local_268 = sVar2 << 8;
      iVar4 = FUN_1001c9b1d(param_4,&local_260);
      if (iVar4 == -0x80) goto LAB_1003b1c30;
      if (iVar4 == 0) {
        iVar4 = FUN_1001c9f0c(local_260,0x676e7265,0,0);
        if (iVar4 != -0x80) {
          if (iVar4 != 0) {
            uVar7 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar7,0x10);
            goto joined_r0x0001003b139f;
          }
          iVar4 = FUN_1001cacbc(local_260,1,0,&local_268,2);
          if (iVar4 != -0x80) {
            if (iVar4 != 0) {
              uVar7 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar7,0x10);
              goto joined_r0x0001003b18ab;
            }
            goto LAB_1003b0d77;
          }
        }
        goto LAB_1003b1c30;
      }
      uVar7 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar7,0x10);
joined_r0x0001003b139f:
      if (cVar1 == '\0') goto LAB_1003b1c30;
LAB_1003b1c1d:
      local_24a = iVar4;
      iVar4 = local_24a;
      local_24c = 0x400;
      uStack_250 = 1;
      uStack_254 = 0x7a0a90;
      local_258 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_258,0x12);
    }
LAB_1003b1c30:
    if (iVar4 == -0x80) goto LAB_1003b230a;
    if (iVar4 == 0) goto LAB_1003b1c43;
    uVar7 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar7,0x10);
    if (cVar1 == '\0') goto LAB_1003b230a;
    local_22a = (char *)CONCAT44(local_22a._4_4_,iVar4);
  }
LAB_1003b1d8f:
  local_22c = 0x400;
  local_234 = "Assertion failure";
  local_238 = 0x8220202;
  __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_238,0x12);
LAB_1003b230a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

