class FCFS
  def self.average_wait_time(processes_timings)
    time_elapsed, total_wait_time = 0, 0
    processes_timings.each do |timing|
      timing[:wait_time] = (time_elapsed <= timing[:queued_at]) ? 0 : time_elapsed - timing[:queued_at]
      time_elapsed += timing[:burst_time]
      total_wait_time += timing[:wait_time]
    end

    total_wait_time / processes_timings.size.to_f
  end
end
