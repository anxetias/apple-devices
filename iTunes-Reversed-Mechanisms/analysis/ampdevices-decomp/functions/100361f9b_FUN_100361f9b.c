// name: FUN_100361f9b
// address: 100361f9b

void FUN_100361f9b(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uStack_b84;
  undefined1 auStack_b80 [4];
  short local_b7c [1402];
  undefined1 local_88 [20];
  int local_74;
  long local_70;
  long local_68;
  undefined1 local_5a;
  undefined1 local_59;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  ___bzero(local_b7c,0xaf4);
  FUN_100351ae9(local_b7c,1,0,1);
  FUN_100351ae9(local_b7c,0x7d,0,0);
  FUN_100351ae9(local_b7c,2,0,0);
  FUN_100351ae9(local_b7c,0xd,0,0);
  FUN_100351ae9(local_b7c,4,0,0);
  FUN_100351ae9(local_b7c,3,0,0);
  FUN_100351ae9(local_b7c,8,0,0);
  local_68 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                           PTR__kCFTypeDictionaryValueCallBacks_10082e140);
  if (local_68 == 0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_4a = "dictionary != nullptr";
LAB_100362328:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    FUN_1001689a5(local_68,&cf_Columns_numColumns,(int)local_b7c[0],1);
    FUN_1001689a5(local_68,&cf_Columns_sortColumnIndex,(int)local_b7c[1],1);
    local_70 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
    if (local_70 != 0) {
      lVar7 = 0xc;
      do {
        uVar3 = *(undefined4 *)((long)&uStack_b84 + lVar7);
        uVar1 = auStack_b80[lVar7];
        uVar2 = auStack_b80[lVar7 + 1];
        local_5a = auStack_b80[lVar7 + 2];
        local_59 = auStack_b80[lVar7 + 3];
        local_74 = (int)*(short *)((long)local_b7c + lVar7);
        lVar5 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                              PTR__kCFTypeDictionaryValueCallBacks_10082e140);
        if (lVar5 == 0) {
          uVar6 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar6,0x10);
          if (cVar4 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "columnInfoDict != nullptr";
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          goto LAB_1003622af;
        }
        FUN_1001689a5(lVar5,&cf_ColumnInfo_trackField,uVar3,1);
        FUN_100168b0b(lVar5,&cf_ColumnInfo_resizable,uVar1,1);
        FUN_100168b0b(lVar5,&cf_ColumnInfo_moveable,uVar2,1);
        FUN_100168b0b(lVar5,&cf_ColumnInfo_sortable,local_5a,1);
        FUN_100168b0b(lVar5,&cf_ColumnInfo_reverseSort,local_59,1);
        FUN_1001689a5(lVar5,&cf_ColumnInfo_width,local_74,1);
        FUN_100165879(local_70);
        FUN_10017060f(lVar5);
        lVar7 = lVar7 + 0x1c;
      } while (lVar7 != 0xafc);
      FUN_100171502(local_68,&cf_Columns_columnInfo,local_70);
LAB_1003622af:
      FUN_10017060f(local_70);
      goto LAB_1003622b8;
    }
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_4a = "array != nullptr";
      goto LAB_100362328;
    }
  }
  FUN_1001782e9(0,0);
LAB_1003622b8:
  FUN_1001a8d40(local_88,local_68);
  FUN_1001a7b1c(&DAT_1008bdd68,local_88);
  FUN_1001a8fac(local_88);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

