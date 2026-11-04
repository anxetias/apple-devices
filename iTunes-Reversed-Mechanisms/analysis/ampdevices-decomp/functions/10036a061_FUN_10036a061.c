// name: FUN_10036a061
// address: 10036a061

int FUN_10036a061(long *param_1,undefined8 param_2,sqlite3_stmt **param_3,undefined8 *param_4)

{
  sqlite3 *db;
  char cVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (sqlite3_stmt **)0x0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      puVar6 = &local_68;
      local_68 = 0x8220202;
      uStack_64 = 0x7a0a90;
      uStack_60 = 1;
      uStack_5c = 0x822;
      pcVar3 = "outStmt != nullptr";
LAB_10036a26a:
      *(char **)((long)puVar6 + 0xe) = pcVar3;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",puVar6,0x16);
    }
  }
  else {
    *param_3 = (sqlite3_stmt *)0x0;
    if (param_4 != (undefined8 *)0x0) {
      param_4[2] = 0;
      param_4[3] = 0;
      *param_4 = 0;
      param_4[1] = 0;
    }
    if (*param_1 == 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        puVar6 = &local_68;
        local_68 = 0x8220202;
        uStack_64 = 0x7a0a90;
        uStack_60 = 1;
        uStack_5c = 0x822;
        pcVar3 = "sqlDB != nullptr";
        goto LAB_10036a26a;
      }
    }
    else {
      cVar1 = FUN_100626f3e(*param_1,param_2,&local_68);
      if (cVar1 != '\0') {
        if (param_4 != (undefined8 *)0x0) {
          param_4[2] = local_58;
          param_4[3] = uStack_50;
          *(undefined4 *)param_4 = local_68;
          *(undefined4 *)((long)param_4 + 4) = uStack_64;
          *(undefined4 *)(param_4 + 1) = uStack_60;
          *(uint *)((long)param_4 + 0xc) = CONCAT22(uStack_5a,uStack_5c);
        }
        pcVar3 = _sqlite3_mprintf("INSERT OR REPLACE INTO %s (%s,%s,%s) VALUES (?,?,?)",
                                  CONCAT44(uStack_64,local_68),
                                  CONCAT26(uStack_5a,CONCAT24(uStack_5c,uStack_60)),"version");
        if (pcVar3 == (char *)0x0) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x822;
            local_3a = "command != nullptr";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
          iVar2 = -0x6c;
        }
        else {
          db = *(sqlite3 **)(*param_1 + 0x68);
          sVar4 = _strlen(pcVar3);
          iVar2 = _sqlite3_prepare_v2(db,pcVar3,(int)sVar4,param_3,(char **)0x0);
          iVar2 = FUN_1001d2d10(iVar2);
          if ((iVar2 != -0x80) && (iVar2 != 0)) {
            uVar5 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            if (cVar1 != '\0') {
              local_48 = 0x8220202;
              local_44 = "Assertion failure";
              local_3c = 0x400;
              local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
            }
          }
        }
        _sqlite3_free(pcVar3);
        goto LAB_10036a29e;
      }
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        puVar6 = &local_48;
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        pcVar3 = "haveField";
        goto LAB_10036a26a;
      }
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_10036a29e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

