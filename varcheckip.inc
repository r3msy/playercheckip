forward CheckPlayerIp(playerid);

public CheckPlayerIp(playerid)
{
	new rows;

	cache_get_row_count(rows);
	
	if(rows)
	{
		new l_connect;
		cache_get_value_name_int(0, "l_connect", l_connect);
		
		if(gettime() - last_connect < 60)
		{
			return Kick(playerid);
		}
	}
  return 1;
}
