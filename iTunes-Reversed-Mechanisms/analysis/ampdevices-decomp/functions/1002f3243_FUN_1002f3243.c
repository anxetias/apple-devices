// name: FUN_1002f3243
// address: 1002f3243

int FUN_1002f3243(undefined8 param_1,char param_2,long *param_3,undefined1 *param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  undefined4 local_488;
  char *local_484;
  undefined2 local_47c;
  int local_47a;
  undefined1 local_470 [1080];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_3 = 0;
  iVar2 = FUN_1002f1c1d(param_1,local_470);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      lVar3 = FUN_1002f418d(local_470,"iTunesArtwork");
      *param_3 = lVar3;
      bVar7 = false;
      iVar6 = 0;
      if (param_2 == '\x01' && lVar3 == 0) {
        bVar7 = false;
        lVar3 = FUN_1002f1f37(local_470,0);
        if (lVar3 == 0) {
          iVar6 = -0x2b;
        }
        else {
          lVar4 = FUN_1002f1b0a(lVar3);
          iVar6 = -0x2b;
          if (lVar4 == 0) {
            bVar7 = false;
          }
          else {
            lVar4 = FUN_100166c1b(lVar4,&cf_cover_image_path);
            bVar7 = false;
            if (lVar4 != 0) {
              lVar4 = FUN_1002f3414(local_470,lVar4);
              *param_3 = lVar4;
              bVar7 = lVar4 != 0;
              iVar6 = -0x2b;
              if (bVar7) {
                iVar6 = 0;
              }
            }
          }
          FUN_10017060f(lVar3);
        }
      }
      iVar2 = -0x2b;
      if (*param_3 != 0) {
        iVar2 = iVar6;
      }
      FUN_1002f315b(local_470);
      if (param_4 != (undefined1 *)0x0) {
        *param_4 = bVar7;
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        FUN_10017060f(*param_3);
        *param_3 = 0;
      }
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_488 = 0x8220202;
        local_484 = "Assertion failure";
        local_47c = 0x400;
        local_47a = iVar2;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_488,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

