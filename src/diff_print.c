	git_error_state error;
	memset(&pi->error, 0, sizeof(pi->error));
		return giterr_capture(&pi->error, -1);
		return giterr_user_cancel();
		return giterr_capture(&pi->error, -1);
		return giterr_user_cancel();
		return giterr_capture(&pi->error, -1);
		return giterr_user_cancel();
		return giterr_capture(&pi->error, -1);
		return giterr_user_cancel();
		return giterr_capture(&pi->error, -1);
		return giterr_user_cancel();
		return giterr_user_cancel();
		return giterr_user_cancel();
	{
		if (error == GIT_EUSER && pi.error.error_code)
			error = giterr_restore(&pi.error);
	}

	{
		if (error && error != GIT_EUSER)
			error = giterr_restore(&pi.error);
	}

	if (error == GIT_EUSER) {
		giterr_set_oom();
	}